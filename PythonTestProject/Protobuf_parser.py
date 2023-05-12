#Telemetry_parser.py

import time
import json
import paho.mqtt.client as mqtt
import ControlMessage_pb2 as Proto
import CommandMessage_pb2 as ProtoCmd
import TelemetryMessage_pb2 as ProtoTele
import CoreProto_pb2 as Core
import Publisher_nodered as pbnd

PROTO_STATE_TO_STRING = {
Core.RS_ABORT : 'RS_ABORT',
Core.RS_ARM : 'RS_ARM',
Core.RS_BURN : 'RS_BURN',
Core.RS_COAST : 'RS_COAST',
Core.RS_DESCENT : 'RS_DESCENT',
Core.RS_FILL : 'RS_FILL',
Core.RS_IGNITION : 'RS_IGNITION',
Core.RS_LAUNCH : 'RS_LAUNCH',
Core.RS_NONE : 'RS_NONE',
Core.RS_PRELAUNCH : 'RS_PRELAUNCH',
Core.RS_RECOVERY : 'RS_RECOVERY'
}

STRING_TO_RSC_PROTO_STATE = {
	"RSC_ANY_TO_ABORT": ProtoCmd.DMBCommand.Command.RSC_ANY_TO_ABORT,
	"RSC_ARM_CONFIRM_1": ProtoCmd.DMBCommand.Command.RSC_ARM_CONFIRM_1,
	"RSC_ARM_CONFIRM_2": ProtoCmd.DMBCommand.Command.RSC_ARM_CONFIRM_2,
	"RSC_BURN_TO_COAST": ProtoCmd.DMBCommand.Command.RSC_BURN_TO_COAST,
	"RSC_CLOSE_DRAIN": ProtoCmd.DMBCommand.Command.RSC_CLOSE_DRAIN,
	"RSC_CLOSE_VENT": ProtoCmd.DMBCommand.Command.RSC_CLOSE_VENT,
	"RSC_COAST_TO_DESCENT": ProtoCmd.DMBCommand.Command.RSC_COAST_TO_DESCENT,
	"RSC_DESCENT_TO_RECOVERY": ProtoCmd.DMBCommand.Command.RSC_DESCENT_TO_RECOVERY,
	"RSC_FIRST_INVALID": ProtoCmd.DMBCommand.Command.RSC_FIRST_INVALID,
	"RSC_GOTO_ARM": ProtoCmd.DMBCommand.Command.RSC_GOTO_ARM,
	"RSC_GOTO_FILL": ProtoCmd.DMBCommand.Command.RSC_GOTO_FILL,
	"RSC_GOTO_IGNITION": ProtoCmd.DMBCommand.Command.RSC_GOTO_IGNITION,
	"RSC_GOTO_PRELAUNCH": ProtoCmd.DMBCommand.Command.RSC_GOTO_PRELAUNCH,
	"RSC_IGNITION_TO_LAUNCH": ProtoCmd.DMBCommand.Command.RSC_IGNITION_TO_LAUNCH,
	"RSC_LAUNCH_TO_BURN": ProtoCmd.DMBCommand.Command.RSC_LAUNCH_TO_BURN,
	"RSC_MEV_CLOSE": ProtoCmd.DMBCommand.Command.RSC_MEV_CLOSE,
	"RSC_OPEN_DRAIN": ProtoCmd.DMBCommand.Command.RSC_OPEN_DRAIN,
	"RSC_OPEN_VENT": ProtoCmd.DMBCommand.Command.RSC_OPEN_VENT,
	"RSC_POWER_TRANSITION_EXTERNAL": ProtoCmd.DMBCommand.Command.RSC_POWER_TRANSITION_EXTERNAL,
	"RSC_POWER_TRANSITION_ONBOARD": ProtoCmd.DMBCommand.Command.RSC_POWER_TRANSITION_ONBOARD,
	"RSC_NONE" : ProtoCmd.DMBCommand.Command.RSC_NONE
}

STRING_TO_PMB_PROTO_STATE = {
	"PMB_CLOSE_MEV": ProtoCmd.PMBCommand.Command.PMB_CLOSE_MEV,
	"PMB_LAST": ProtoCmd.PMBCommand.Command.PMB_LAST,
	"PMB_NONE": ProtoCmd.PMBCommand.Command.PMB_NONE,
	"PMB_OPEN_MEV": ProtoCmd.PMBCommand.Command.PMB_OPEN_MEV
}

def coord_parse_json_send(msg):
    dmb_jsonStr_gps = json.dump(pbnd.tele_dmb_obj.tele_gps(msg.coord.latitude.degrees, msg.coord.latitude.minutes, msg.coord.antenna_alt, msg.coord.total_alt, msg.coord.time))
    client.publish("TELE_DMB_GPS", dmb_jsonStr_gps)

def baro_parse_json_send(msg):
    dmb_jsonStr_baro = json_dump(pbnd.tele_dmb_obj.tele_baro(msg.baro.temp, msg.baro.pressure))
    client.publish("TELE_DMB_BARO", dmb_jsonStr_baro)

def imu_parse_json_send(msg):
    accel = [msg.imu.accelx, msg.imu.accely, msg.imu.accelz]
    gyro = [msg.imu.gyrox, msg.imu.gyroy, msg.imu.gyroz]
    magn = [msg.imu.magx, msg.imu.magy, msg.imu.magz]
    dmb_jsonStr_imu = json.dump(pbnd.tele_dmb_obj.tele_imu(accel, gyro, magn))
    client.publish("TELE_DMB_IMU", dmb_jsonStr_imu)

def bat_parse_json_send(msg):
    dmb_jsonStr_battery = json.dumps(pbnd.tele_dmb_obj.tele_battery(msg.bat.power_source, msg.bat.volt))
    client.publish("TELE_DMB_BATTERY", dmb_jsonStr_battery)

def flash_parse_json_send(msg):
    dmb_jsonStr_flash = json.dumps(pbnd.tele_dmb_obj.tele_flash(msg.flash.loghz, msg.flash.logsec))
    client.publish("TELE_DMB_FLASH", dmb_jsonStr_flash)

def pressdmb_parse_json_send(msg):
    dmb_jsonStr_pressure = json.dumps(pbnd.tele_pbb_obj.tele_pressure(msg.pressdmb.pressure1, msg.pressdmb.pressure2))
    client.publish("TELE_DMB_PRESSURE", dmb_jsonStr_pressure)

def presspbb_parse_json_send(msg):
    pbb_jsonStr_pressure = json.dumps(pbnd.tele_pbb_obj.tele_pressure(msg.pressdmb.pressure1, msg.pressdmb.pressure2))
    client.publish("TELE_PBB_PRESSURE", pbb_jsonStr_pressure)

def temppbb_parse_json_send(msg):
    pbb_jsonStr_temperature = json.dumps(pbnd.tele_pbb_obj.tele_pressure(msg.tempdmb.temp1, msg.tempdmb.temp2))
    client.publish("TELE_PBB_TEMP", pbb_jsonStr_temperature)

def gpio_parse_json_send(msg):
    pbb_jsonStr_gpio_status = json.dumps(pbnd.tele_pbb_obj.tele_gpio_status(msg.gpio.main_engine_valve, 0))
    client.publish("TELE_PBB_GPIO", pbb_jsonStr_gpio_status)

def pressrcu_parse_json_send(msg):
    rcu_jsonStr_pressure = json.dumps(pbnd.tele_rcu_obj.tele_pressure(msg.pressrcu.pressure1, msg.pressrcu.pressure2, msg.pressrcu.pressure3, msg.pressrcu.pressure4))
    client.publish("TELE_RCU_PRESSURE", rcu_jsonStr_pressure)

def temprcu_parse_json_send(msg):
    rcu_jsonStr_temp = json.dumps(pbnd.tele_rcu_obj.tele_temp(msg.temprcu.temp1, msg.temprcu.temp2))
    client.publish("TELE_RCU_TEMP", rcu_jsonStr_temp)

def nos_parse_json_send(msg):
    rcu_jsonStr_nos_load_cell = json.dumps(pbnd.tele_rcu_obj.tele_nos_load_cell(msg.nos.nos1mass, msg.nos.nos2mass))
    client.publish("TELE_RCU_NOS", rcu_jsonStr_nos_load_cell)

def relay_parse_json_send(msg):
    rcu_jsonStr_relay_status = json.dumps(pbnd.tele_rcu_obj.tele_relay_status(msg.relay.ac1, msg.relay.ac2, msg.relay.pbv1, msg.relay.pbv2, msg.relay.sol1, msg.relay.sol2, msg.relay.sol3, msg.relay.sol4, msg.relay.sol5, msg.relay.sol6, msg.relay.sol7, msg.relay.sol8a, msg.relay.sol8b))
    client.publish("TELE_RCU_RELAY", rcu_jsonStr_relay_status)

def padbox_parse_json_send(msg):
    rcu_jsonStr_padbox_status = json.dumps(pbnd.tele_rcu_obj.tele_padbox_status(msg.padbox.cont1, msg.padbox.cont1))
    client.publish("TELE_RCU_PADBOX", rcu_jsonStr_padbox_status)

def lr_parse_json_send(msg):
    sob_jsonStr_lr_load_cell = json.dumps(pbnd.tele_sob_obj.tele_lr_load_cell(msg.lr.rocketlc))
    client.publish("TELE_SOB_LOAD_CELL", sob_jsonStr_lr_load_cell)

def tempsob_parse_json_send(msg):
    sob_jsonStr_temp = json.dumps(pbnd.tele_sob_obj.tele_temp(msg.tempsob.temp1, msg.tempsob.temp2))
    client.publish("TELE_SOB_TEMP", sob_jsonStr_temp)

def irtemp_parse_json_send(msg):
    sob_jsonStr_irtemp = json.dumps(pbnd.tele_sob_obj.tele_temp(msg.tempsob.temp1, msg.tempsob.temp2))
    client.publish("TELE_SOB_IRTEMP", sob_jsonStr_irtemp)

TELE_FUNCTION_DICTIONARY = {
	"coord": coord_parse_json_send,
	"baro": baro_parse_json_send,
	"imu": imu_parse_json_send,
	"bat": bat_parse_json_send,
	"flash": flash_parse_json_send,
	"pressdmb": pressdmb_parse_json_send,
    "presspbb": presspbb_parse_json_send,
	"temppbb": temppbb_parse_json_send,
	"gpio": gpio_parse_json_send,
	"pressrcu": pressrcu_parse_json_send,
	"temprcu": temprcu_parse_json_send,
	"nos": nos_parse_json_send,
	"relay": relay_parse_json_send,
	"padbox": padbox_parse_json_send,
	"lr": lr_parse_json_send,
	"tempsob": tempsob_parse_json_send,
    "irtemp": irtemp_parse_json_send
}

'''

def print_hi(name):
    print(f'Hi, {name}')

def example_protobuf_encode_decode():
    """
    Example of how to use Protobuf
    """

    # You can either generate a wrapped message like this...
    msg = Proto.ControlMessage()
    msg.source = Core.NODE_RCU
    msg.target = Core.NODE_DMB
    msg.ack.acking_msg_id = Core.MSG_INVALID
    msg.ack.acking_msg_source = Core.NODE_DMB
    print(msg)

    # Or like this
    controlMsg = Proto.AckNack()
    controlMsg.acking_msg_source = Core.NODE_DMB
    controlMsg.acking_msg_id = Core.MSG_INVALID
    msg2 = Proto.ControlMessage()
    msg2.source = Core.NODE_RCU
    msg2.target = Core.NODE_DMB
    msg2.nack.CopyFrom(controlMsg)

    # Serialize
    print('\n\t>> Example of a serializing a ACK message')
    msgOut = msg.SerializeToString()
    print(f'{msgOut}')

    # Deserialize
    print('\n\t>> Example of a deserializing a ACK message, and reading the message field')
    msgParsed = Proto.ControlMessage()
    msgParsed.ParseFromString(msgOut)

    if(msgParsed.HasField("ack")):
        print("I got a ACK")
    elif(msgParsed.HasField("nack")):
        print("I got a NACK")

    # Serialize
    print('\n\t>> Example of a serializing a NACK message')
    msgOut = msg2.SerializeToString()
    print(f'{msgOut}')

    # Deserialize
    print('\n\t>> Example of a deserializing a NACK message, and reading the message field')
    msgParsed.ParseFromString(msg2.SerializeToString())

    if(msgParsed.HasField("ack")):
        print("I got a ACK")
    elif(msgParsed.HasField("nack")):
        print("I got a NACK")

def example_codec_encode_decode():
    """
    Example of how to use the codec
    """
    from Codec import Codec

    # Imagine we've serialized some protobuf data
    msg = Proto.ControlMessage()
    msg.source = Core.NODE_RCU
    msg.target = Core.NODE_DMB
    msg.ack.acking_msg_id = Core.NODE_DMB
    msg.ack.acking_msg_source = Core.NODE_DMB
    buf = msg.SerializeToString()

    encBuf = Codec.Encode(buf, len(buf), Core.MessageID.MSG_CONTROL)
    print('\n\t>> Example of codec encoded protobuf data')
    print(f'Original Message Size: {len(buf)}')
    print(f'Expected Encoded Size: {Codec.GetEncodedSize(len(buf))}')
    print(f'Encoded Message Size: {len(encBuf)}')
    print(bytes(encBuf))

def example_send_state_change_to_serial():
    """
    Example of how to send a state change to the serial port
    """

    # Imagine we've serialized some protobuf data
    msg = ProtoCmd.CommandMessage()
    msg.source = Core.NODE_RCU
    msg.target = Core.NODE_DMB
    msg.dmb_command.command_enum = ProtoCmd.DMBCommand.Command.RSC_GOTO_PRELAUNCH
    buf = msg.SerializeToString()

    encBuf = Codec.Encode(buf, len(buf), Core.MessageID.MSG_CONTROL)
    print('\n\t>> Example of codec encoded state change command')
    print(f'Original Message Size: {len(buf)}')
    print(f'Encoded Message Size: {len(encBuf)}')
    print(bytes(encBuf))

    # Send the data to the serial port
    ser.write(encBuf)

'''
