# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: TelemetryMessage.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import CoreProto_pb2 as CoreProto__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x16TelemetryMessage.proto\x12\x05Proto\x1a\x0f\x43oreProto.proto\"\x80\x03\n\x10TelemetryMessage\x12\x1b\n\x06source\x18\x01 \x01(\x0e\x32\x0b.Proto.Node\x12\x1b\n\x06target\x18\x02 \x01(\x0e\x32\x0b.Proto.Node\x12\x12\n\nmessage_id\x18\x03 \x01(\r\x12\x1b\n\x05\x63oord\x18\x04 \x01(\x0b\x32\n.Proto.GPSH\x00\x12\x1b\n\x04\x62\x61ro\x18\x05 \x01(\x0b\x32\x0b.Proto.BaroH\x00\x12\x19\n\x03imu\x18\x06 \x01(\x0b\x32\n.Proto.IMUH\x00\x12\x1d\n\x03\x62\x61t\x18\x07 \x01(\x0b\x32\x0e.Proto.BatteryH\x00\x12!\n\tflashInfo\x18\x08 \x01(\x0b\x32\x0c.Proto.FlashH\x00\x12&\n\x08pressdmb\x18\t \x01(\x0b\x32\x12.Proto.DMBPressureH\x00\x12$\n\x05vanes\x18\n \x01(\x0b\x32\x13.Proto.VanePositionH\x00\x12.\n\x04gpio\x18\x0c \x01(\x0b\x32\x1e.Proto.CombustionControlStatusH\x00\x42\t\n\x07message\"\xd6\x01\n\x03GPS\x12 \n\x08latitude\x18\x01 \x01(\x0b\x32\x0e.Proto.LatLong\x12!\n\tlongitude\x18\x02 \x01(\x0b\x32\x0e.Proto.LatLong\x12(\n\x0b\x61ntenna_alt\x18\x03 \x01(\x0b\x32\x13.Proto.AltitudeType\x12*\n\rgeoidAltitude\x18\x04 \x01(\x0b\x32\x13.Proto.AltitudeType\x12&\n\ttotal_alt\x18\x05 \x01(\x0b\x32\x13.Proto.AltitudeType\x12\x0c\n\x04time\x18\x06 \x01(\r\"+\n\x07LatLong\x12\x0f\n\x07\x64\x65grees\x18\x01 \x01(\x05\x12\x0f\n\x07minutes\x18\x02 \x01(\x05\".\n\x0c\x41ltitudeType\x12\x10\n\x08\x61ltitude\x18\x01 \x01(\x05\x12\x0c\n\x04unit\x18\x02 \x01(\x05\"0\n\x04\x42\x61ro\x12\x15\n\rbaro_pressure\x18\x01 \x01(\x05\x12\x11\n\tbaro_temp\x18\x02 \x01(\x05\"\x8c\x01\n\x03IMU\x12\x0e\n\x06\x61\x63\x63\x65lx\x18\x01 \x01(\x05\x12\x0e\n\x06\x61\x63\x63\x65ly\x18\x02 \x01(\x05\x12\x0e\n\x06\x61\x63\x63\x65lz\x18\x03 \x01(\x05\x12\r\n\x05gyrox\x18\x04 \x01(\x05\x12\r\n\x05gyroy\x18\x05 \x01(\x05\x12\r\n\x05gyroz\x18\x06 \x01(\x05\x12\x0c\n\x04magx\x18\x07 \x01(\x05\x12\x0c\n\x04magy\x18\x08 \x01(\x05\x12\x0c\n\x04magz\x18\t \x01(\x05\"{\n\x07\x42\x61ttery\x12-\n\x08p_source\x18\x01 \x01(\x0e\x32\x1b.Proto.Battery.power_source\x12\x0c\n\x04volt\x18\x02 \x01(\x05\"3\n\x0cpower_source\x12\x0b\n\x07INVALID\x10\x00\x12\n\n\x06GROUND\x10\x01\x12\n\n\x06ROCKET\x10\x02\"5\n\x05\x46lash\x12\x16\n\x0esector_address\x18\x01 \x01(\r\x12\x14\n\x0clogging_rate\x18\x02 \x01(\r\"(\n\x0b\x44MBPressure\x12\x19\n\x11upper_pv_pressure\x18\x01 \x01(\x05\"=\n\x0bPBBPressure\x12\x13\n\x0bib_pressure\x18\x01 \x01(\x05\x12\x19\n\x11lower_pv_pressure\x18\x02 \x01(\x05\"9\n\x07PBBTemp\x12\x16\n\x0eib_temperature\x18\x01 \x01(\x05\x12\x16\n\x0epv_temperature\x18\x02 \x01(\x05\"Z\n\x17\x43ombustionControlStatus\x12\x11\n\tvent_open\x18\x02 \x01(\x08\x12\x12\n\ndrain_open\x18\x03 \x01(\x08\x12\x18\n\x10mev_power_enable\x18\x04 \x01(\x08\"\x1c\n\x08MEVState\x12\x10\n\x08mev_open\x18\x01 \x01(\x08\"e\n\x0bRCUPressure\x12\x14\n\x0cpt1_pressure\x18\x01 \x01(\x05\x12\x14\n\x0cpt2_pressure\x18\x02 \x01(\x05\x12\x14\n\x0cpt3_pressure\x18\x03 \x01(\x05\x12\x14\n\x0cpt4_pressure\x18\x04 \x01(\x05\"-\n\x07RCUTemp\x12\x10\n\x08tc1_temp\x18\x01 \x01(\x05\x12\x10\n\x08tc2_temp\x18\x02 \x01(\x05\"3\n\x0bNOSLoadCell\x12\x11\n\tnos1_mass\x18\x01 \x01(\x05\x12\x11\n\tnos2_mass\x18\x02 \x01(\x05\"\x97\x02\n\x0bRelayStatus\x12\x10\n\x08\x61\x63\x31_open\x18\x01 \x01(\x08\x12\x10\n\x08\x61\x63\x32_open\x18\x02 \x01(\x08\x12\x11\n\tpbv1_open\x18\x03 \x01(\x08\x12\x11\n\tpbv2_open\x18\x04 \x01(\x08\x12\x11\n\tpbv3_open\x18\x05 \x01(\x08\x12\x11\n\tsol1_open\x18\x06 \x01(\x08\x12\x11\n\tsol2_open\x18\x07 \x01(\x08\x12\x11\n\tsol3_open\x18\x08 \x01(\x08\x12\x11\n\tsol4_open\x18\t \x01(\x08\x12\x11\n\tsol5_open\x18\n \x01(\x08\x12\x11\n\tsol6_open\x18\x0b \x01(\x08\x12\x11\n\tsol7_open\x18\x0c \x01(\x08\x12\x12\n\nsol8a_open\x18\r \x01(\x08\x12\x12\n\nsol8b_open\x18\x0e \x01(\x08\"N\n\x0cPadBoxStatus\x12\r\n\x05\x63ont1\x18\x01 \x01(\x08\x12\r\n\x05\x63ont2\x18\x02 \x01(\x08\x12\x0f\n\x07\x62ox1_on\x18\x03 \x01(\x08\x12\x0f\n\x07\x62ox2_on\x18\x04 \x01(\x08\"!\n\nLRLoadCell\x12\x13\n\x0brocket_mass\x18\x01 \x01(\x05\"-\n\x07SOBTemp\x12\x10\n\x08tc1_temp\x18\x01 \x01(\x05\x12\x10\n\x08tc2_temp\x18\x02 \x01(\x05\":\n\rIRTemperature\x12\x14\n\x0c\x61mbient_temp\x18\x01 \x01(\x05\x12\x13\n\x0bobject_temp\x18\x02 \x01(\x05\"d\n\x0cVanePosition\x12\x14\n\x0cvane_profile\x18\x01 \x01(\r\x12\x0e\n\x06vane_1\x18\x02 \x01(\x02\x12\x0e\n\x06vane_2\x18\x03 \x01(\x02\x12\x0e\n\x06vane_3\x18\x04 \x01(\x02\x12\x0e\n\x06vane_4\x18\x05 \x01(\x02\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'TelemetryMessage_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _TELEMETRYMESSAGE._serialized_start=51
  _TELEMETRYMESSAGE._serialized_end=435
  _GPS._serialized_start=438
  _GPS._serialized_end=652
  _LATLONG._serialized_start=654
  _LATLONG._serialized_end=697
  _ALTITUDETYPE._serialized_start=699
  _ALTITUDETYPE._serialized_end=745
  _BARO._serialized_start=747
  _BARO._serialized_end=795
  _IMU._serialized_start=798
  _IMU._serialized_end=938
  _BATTERY._serialized_start=940
  _BATTERY._serialized_end=1063
  _BATTERY_POWER_SOURCE._serialized_start=1012
  _BATTERY_POWER_SOURCE._serialized_end=1063
  _FLASH._serialized_start=1065
  _FLASH._serialized_end=1118
  _DMBPRESSURE._serialized_start=1120
  _DMBPRESSURE._serialized_end=1160
  _PBBPRESSURE._serialized_start=1162
  _PBBPRESSURE._serialized_end=1223
  _PBBTEMP._serialized_start=1225
  _PBBTEMP._serialized_end=1282
  _COMBUSTIONCONTROLSTATUS._serialized_start=1284
  _COMBUSTIONCONTROLSTATUS._serialized_end=1374
  _MEVSTATE._serialized_start=1376
  _MEVSTATE._serialized_end=1404
  _RCUPRESSURE._serialized_start=1406
  _RCUPRESSURE._serialized_end=1507
  _RCUTEMP._serialized_start=1509
  _RCUTEMP._serialized_end=1554
  _NOSLOADCELL._serialized_start=1556
  _NOSLOADCELL._serialized_end=1607
  _RELAYSTATUS._serialized_start=1610
  _RELAYSTATUS._serialized_end=1889
  _PADBOXSTATUS._serialized_start=1891
  _PADBOXSTATUS._serialized_end=1969
  _LRLOADCELL._serialized_start=1971
  _LRLOADCELL._serialized_end=2004
  _SOBTEMP._serialized_start=2006
  _SOBTEMP._serialized_end=2051
  _IRTEMPERATURE._serialized_start=2053
  _IRTEMPERATURE._serialized_end=2111
  _VANEPOSITION._serialized_start=2113
  _VANEPOSITION._serialized_end=2213
# @@protoc_insertion_point(module_scope)
