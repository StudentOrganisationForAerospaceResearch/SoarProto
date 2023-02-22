# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ControlMessage.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import CoreProto_pb2 as CoreProto__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x14\x43ontrolMessage.proto\x12\x05proto\x1a\x0f\x43oreProto.proto\"\xab\x02\n\x0e\x43ontrolMessage\x12\x1b\n\x06source\x18\x01 \x01(\x0e\x32\x0b.proto.Node\x12\x1b\n\x06target\x18\x02 \x01(\x0e\x32\x0b.proto.Node\x12\x12\n\nmessage_id\x18\x03 \x01(\r\x12\x1b\n\x13source_sequence_num\x18\x04 \x01(\r\x12\x1d\n\x03\x61\x63k\x18\x05 \x01(\x0b\x32\x0e.proto.AckNackH\x00\x12\x1e\n\x04nack\x18\x06 \x01(\x0b\x32\x0e.proto.AckNackH\x00\x12\x1b\n\x04ping\x18\x07 \x01(\x0b\x32\x0b.proto.PingH\x00\x12\x1e\n\x02hb\x18\x08 \x01(\x0b\x32\x10.proto.HeartbeatH\x00\x12\'\n\tsys_state\x18\t \x01(\x0b\x32\x12.proto.SystemStateH\x00\x42\t\n\x07message\"e\n\x07\x41\x63kNack\x12&\n\x11\x61\x63king_msg_source\x18\x01 \x01(\x0e\x32\x0b.proto.Node\x12\x15\n\racking_msg_id\x18\x02 \x01(\r\x12\x1b\n\x13\x61\x63king_sequence_num\x18\x03 \x01(\r\"d\n\x04Ping\x12\x13\n\x0bping_ack_id\x18\x01 \x01(\r\x12\"\n\x1aping_response_sequence_num\x18\x02 \x01(\r\x12#\n\x1bsys_state_response_required\x18\x03 \x01(\x08\"-\n\tHeartbeat\x12 \n\x18hb_response_sequence_num\x18\x01 \x01(\r\"\xfe\x01\n\x0bSystemState\x12+\n\tsys_state\x18\x01 \x01(\x0e\x32\x18.proto.SystemState.State\x12-\n\x0crocket_state\x18\x02 \x01(\x0e\x32\x12.proto.RocketStateH\x00\x88\x01\x01\"\x81\x01\n\x05State\x12\x0f\n\x0bSYS_INVALID\x10\x00\x12\x17\n\x13SYS_BOOTUP_COMPLETE\x10\x01\x12\x1c\n\x18SYS_ASSERT_FAILURE_RESET\x10\x02\x12\x16\n\x12SYS_UNCAUGHT_RESET\x10\x03\x12\x18\n\x14SYS_NORMAL_OPERATION\x10\x04\x42\x0f\n\r_rocket_stateb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ControlMessage_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _CONTROLMESSAGE._serialized_start=49
  _CONTROLMESSAGE._serialized_end=348
  _ACKNACK._serialized_start=350
  _ACKNACK._serialized_end=451
  _PING._serialized_start=453
  _PING._serialized_end=553
  _HEARTBEAT._serialized_start=555
  _HEARTBEAT._serialized_end=600
  _SYSTEMSTATE._serialized_start=603
  _SYSTEMSTATE._serialized_end=857
  _SYSTEMSTATE_STATE._serialized_start=711
  _SYSTEMSTATE_STATE._serialized_end=840
# @@protoc_insertion_point(module_scope)
