#
# FILE: Main.py (Python Test Project)
# BRIEF: This file contains some example code for using protobuf and the codec
# AUTHOR: Christopher Chan (cjchanx)
#
# PIP PACKAGE LIST: pip install cobs; pip install pyserial; pip install protobuf
#

#todo:  dont worry about acks, but do send nacks when a message is nonsensical
#       Check Nacks



import ControlMessage_pb2 as ProtoCtr
import CommandMessage_pb2 as ProtoCmd
import TelemetryMessage_pb2 as ProtoTele
import CoreProto_pb2 as Core
import paho.mqtt.client as mqtt
import Protobuf_parser as ProtoParse
import Publisher_nodered as pbnd
import google.protobuf.message as message

import serial       # You'll need to run `pip install pyserial`
from Codec import Codec
import time
import json

# Constant
EXAMPLE_COM_PORT = '/dev/ttyUSB0'
MQTT_BROKER = '127.0.0.1'
PASSPHRASE = '1'

# Setup serial port
# 
SER = serial.Serial(port=EXAMPLE_COM_PORT, baudrate=57600, bytesize=8, parity=serial.PARITY_NONE, timeout=None, stopbits=serial.STOPBITS_ONE)

# Globals
sequence_number = 1
current_state = "RS_ABORT"

def populate_command_msg(data_dictionary):
    global sequence_number

    command = data_dictionary["command"]
    
    #create message  
    msg = ProtoCmd.CommandMessage()
    msg.source = Core.NODE_RCU
    msg.source_sequence_num = sequence_number
    sequence_number = sequence_number + 1

    dmb_command = ProtoParse.STRING_TO_RSC_PROTO_COMMAND.get(command)

    if dmb_command != None:
        if data_dictionary["passphrase"] != PASSPHRASE:
            ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Invalid Passphrase"}))
            return False

        if command not in ProtoParse.ALLOWED_COMMANDS_FROM_STATE[current_state]:
            ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Invalid RSC Command"}))
            return False
 
        msg.dmb_command.command_enum = dmb_command
        msg.target = Core.NODE_DMB
        return msg
    
    pbb_comand = ProtoParse.STRING_TO_PBB_PROTO_COMMAND.get(command)

    if pbb_comand != None:
        msg.pbb_command.command_enum = pbb_comand
        msg.target = Core.NODE_PBB
        return msg

    rcu_comand = ProtoParse.STRING_TO_RCU_PROTO_COMMAND.get(command)

    if rcu_comand != None:
        msg.rcu_command.command_enum = rcu_comand
        msg.target = Core.NODE_RCU
        return msg

    sob_comand = ProtoParse.STRING_TO_SOB_PROTO_COMMAND.get(command)

    if sob_comand != None:
        msg.sob_command.command_enum = sob_comand
        msg.target = Core.NODE_SOB
        return msg
    
    ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Invalid Command"}))
    return False

def send_command_msg(command):
    #create msg
    msg = populate_command_msg(command)
    
    #encode
    buf = msg.SerializeToString()
    encBuf = Codec.Encode(buf, len(buf), Core.MessageID.MSG_COMMAND)
    #print(len(encBuf))
    #print(encBuf)

    # Send the data to the serial port
    SER.write(encBuf)

def on_mqtt_message(client, userdata, message):

    #print("received message: ",str(message.payload.decode("utf-8")))
    data_dictionary = json.loads(message.payload.decode("utf-8"))

    if message.topic == "RCU/Commands":
        send_command_msg(data_dictionary)
    else:
        ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Unknown Command Topic"}))
        print("unknown topic")
        return False
        

    return True

def send_ack_message(msg):
    ack_msg = ProtoCmd.ControlMessage()
    ack_msg.source = Core.NODE_RCU
    ack_msg.target = msg.source
    ack_msg.message_id = Core.MSG_CONTROL
    ack_msg.source_sequence_number = 0
    ack_msg.ack.acking_msg_id = msg.message_id
    ack_msg.ack.acking_msg_source = Core.NODE_RCU
    ack_msg.ack.acking_sequence_num = msg.source_sequence_number

# telemetry message
def process_telemetry_message(data):
    received_message = ProtoTele.TelemetryMessage()
    try:
        received_message.ParseFromString(data)
    except message.DecodeError: 
        print("cannot decode telemetry message")
        return

    if received_message.target == Core.NODE_RCU:
        message_type = received_message.WhichOneof('message')
        print(message_type)
        #print(received_message)

        if(message_type != None):
            ProtoParse.TELE_FUNCTION_DICTIONARY[message_type](received_message)
            return
        else:
            print("received invalid telemetry message type")
            ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Invalid telemetry message type"}))

# control message 
def process_control_message(data):
    received_message = ProtoCtr.ControlMessage()

    try:
        received_message.ParseFromString(data)
    except message.DecodeError:
        print("cannot decode control message")
        return

    print(received_message)

    if received_message.target == Core.NODE_RCU:
        message_type = received_message.WhichOneof('message')
        if message_type == 'sys_state':
            print(received_message.sys_state)
            if received_message.source == Core.NODE_DMB:
                global current_state
                current_state = ProtoParse.PROTO_STATE_TO_STRING[received_message.sys_state.rocket_state]
                print(ProtoParse.PROTO_STATE_TO_STRING[received_message.sys_state.rocket_state])
        elif message_type == 'hb':
            print('hb: ', received_message.source)
        elif message_type == 'ping':
            send_ack_message(received_message)
            print('we were pinged: ', received_message.source)
        elif message_type == 'ack':
            print('oh hey, we ack: ', received_message.source)
        elif message_type == 'nack':
            #add resend of message
            print('nack received, this is bad')
    
# placeholder in case the pi ever receives a command message
#def process_command_message(msg):

def on_serial_message(message):
    if len(message) < 5:
        print("Pi error message too short")
        ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Received ivalid message, length less than 5"}))
        return
    
    #print("message received")
    #decode, remove 0x00 byte
    msgId, data = Codec.Decode(message[:-1], len(message) - 1)

    #Process essage according to ID
    if msgId == Core.MessageID.MSG_TELEMETRY:
        process_telemetry_message(data)
    elif msgId == Core.MessageID.MSG_CONTROL:
        process_control_message(data)
    else:
        print("Pi error")
        ProtoParse.client.publish("TELE_PI_ERROR", json.dumps({"error": "Received invalid MessageID"}))

if __name__ == '__main__':
    ProtoParse.client.connect(MQTT_BROKER)

    ProtoParse.client.loop_start()
    ProtoParse.client.subscribe("RCU/Commands")
    ProtoParse.client.on_message=on_mqtt_message

    while True:
        # codec encodes the end of a message through a 0x00
        serial_message = SER.read_until(expected = b'\x00', size = None)
        #print(serial_message)
        on_serial_message(serial_message)
        x = None
        