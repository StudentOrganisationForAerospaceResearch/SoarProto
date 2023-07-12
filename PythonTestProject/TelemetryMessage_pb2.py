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


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x16TelemetryMessage.proto\x12\x05Proto\x1a\x0f\x43oreProto.proto\"\xf0\x05\n\x10TelemetryMessage\x12\x1b\n\x06source\x18\x01 \x01(\x0e\x32\x0b.Proto.Node\x12\x1b\n\x06target\x18\x02 \x01(\x0e\x32\x0b.Proto.Node\x12\x12\n\nmessage_id\x18\x03 \x01(\r\x12\x1b\n\x05\x63oord\x18\x04 \x01(\x0b\x32\n.Proto.GPSH\x00\x12\x1b\n\x04\x62\x61ro\x18\x05 \x01(\x0b\x32\x0b.Proto.BaroH\x00\x12\x19\n\x03imu\x18\x06 \x01(\x0b\x32\n.Proto.IMUH\x00\x12\x1d\n\x03\x62\x61t\x18\x07 \x01(\x0b\x32\x0e.Proto.BatteryH\x00\x12!\n\tflashInfo\x18\x08 \x01(\x0b\x32\x0c.Proto.FlashH\x00\x12&\n\x08pressdmb\x18\t \x01(\x0b\x32\x12.Proto.DMBPressureH\x00\x12&\n\x08presspbb\x18\n \x01(\x0b\x32\x12.Proto.PBBPressureH\x00\x12!\n\x07temppbb\x18\x0b \x01(\x0b\x32\x0e.Proto.PBBTempH\x00\x12.\n\x04gpio\x18\x0c \x01(\x0b\x32\x1e.Proto.CombustionControlStatusH\x00\x12&\n\x08pressrcu\x18\r \x01(\x0b\x32\x12.Proto.RCUPressureH\x00\x12!\n\x07temprcu\x18\x0e \x01(\x0b\x32\x0e.Proto.RCUTempH\x00\x12!\n\x03nos\x18\x0f \x01(\x0b\x32\x12.Proto.NOSLoadCellH\x00\x12#\n\x05relay\x18\x10 \x01(\x0b\x32\x12.Proto.RelayStatusH\x00\x12%\n\x06padbox\x18\x11 \x01(\x0b\x32\x13.Proto.PadBoxStatusH\x00\x12\x1f\n\x02lr\x18\x12 \x01(\x0b\x32\x11.Proto.LRLoadCellH\x00\x12!\n\x07tempsob\x18\x13 \x01(\x0b\x32\x0e.Proto.SOBTempH\x00\x12&\n\x06irtemp\x18\x14 \x01(\x0b\x32\x14.Proto.IRTemperatureH\x00\x12#\n\x08mevstate\x18\x15 \x01(\x0b\x32\x0f.Proto.MEVStateH\x00\x42\t\n\x07message\"\xd6\x01\n\x03GPS\x12 \n\x08latitude\x18\x01 \x01(\x0b\x32\x0e.Proto.LatLong\x12!\n\tlongitude\x18\x02 \x01(\x0b\x32\x0e.Proto.LatLong\x12(\n\x0b\x61ntenna_alt\x18\x03 \x01(\x0b\x32\x13.Proto.AltitudeType\x12*\n\rgeoidAltitude\x18\x04 \x01(\x0b\x32\x13.Proto.AltitudeType\x12&\n\ttotal_alt\x18\x05 \x01(\x0b\x32\x13.Proto.AltitudeType\x12\x0c\n\x04time\x18\x06 \x01(\r\"+\n\x07LatLong\x12\x0f\n\x07\x64\x65grees\x18\x01 \x01(\x05\x12\x0f\n\x07minutes\x18\x02 \x01(\x05\".\n\x0c\x41ltitudeType\x12\x10\n\x08\x61ltitude\x18\x01 \x01(\x05\x12\x0c\n\x04unit\x18\x02 \x01(\x05\"0\n\x04\x42\x61ro\x12\x15\n\rbaro_pressure\x18\x01 \x01(\x05\x12\x11\n\tbaro_temp\x18\x02 \x01(\x05\"\x8c\x01\n\x03IMU\x12\x0e\n\x06\x61\x63\x63\x65lx\x18\x01 \x01(\x05\x12\x0e\n\x06\x61\x63\x63\x65ly\x18\x02 \x01(\x05\x12\x0e\n\x06\x61\x63\x63\x65lz\x18\x03 \x01(\x05\x12\r\n\x05gyrox\x18\x04 \x01(\x05\x12\r\n\x05gyroy\x18\x05 \x01(\x05\x12\r\n\x05gyroz\x18\x06 \x01(\x05\x12\x0c\n\x04magx\x18\x07 \x01(\x05\x12\x0c\n\x04magy\x18\x08 \x01(\x05\x12\x0c\n\x04magz\x18\t \x01(\x05\"{\n\x07\x42\x61ttery\x12-\n\x08p_source\x18\x01 \x01(\x0e\x32\x1b.Proto.Battery.power_source\x12\x0c\n\x04volt\x18\x02 \x01(\r\"3\n\x0cpower_source\x12\x0b\n\x07INVALID\x10\x00\x12\n\n\x06GROUND\x10\x01\x12\n\n\x06ROCKET\x10\x02\"5\n\x05\x46lash\x12\x16\n\x0esector_address\x18\x01 \x01(\r\x12\x14\n\x0clogging_rate\x18\x02 \x01(\r\"(\n\x0b\x44MBPressure\x12\x19\n\x11upper_pv_pressure\x18\x01 \x01(\r\"=\n\x0bPBBPressure\x12\x13\n\x0bib_pressure\x18\x01 \x01(\r\x12\x19\n\x11lower_pv_pressure\x18\x02 \x01(\r\"9\n\x07PBBTemp\x12\x16\n\x0eib_temperature\x18\x01 \x01(\r\x12\x16\n\x0epv_temperature\x18\x02 \x01(\r\"z\n\x17\x43ombustionControlStatus\x12\x1e\n\x16main_engine_valve_open\x18\x01 \x01(\x08\x12\x11\n\tvent_open\x18\x02 \x01(\x08\x12\x12\n\ndrain_open\x18\x03 \x01(\x08\x12\x18\n\x10mev_power_enable\x18\x04 \x01(\x08\"\x1c\n\x08MEVState\x12\x10\n\x08mev_open\x18\x01 \x01(\x08\"e\n\x0bRCUPressure\x12\x14\n\x0cpt1_pressure\x18\x01 \x01(\r\x12\x14\n\x0cpt2_pressure\x18\x02 \x01(\r\x12\x14\n\x0cpt3_pressure\x18\x03 \x01(\r\x12\x14\n\x0cpt4_pressure\x18\x04 \x01(\r\"-\n\x07RCUTemp\x12\x10\n\x08tc1_temp\x18\x01 \x01(\r\x12\x10\n\x08tc2_temp\x18\x02 \x01(\r\"3\n\x0bNOSLoadCell\x12\x11\n\tnos1_mass\x18\x01 \x01(\r\x12\x11\n\tnos2_mass\x18\x02 \x01(\r\"\x97\x02\n\x0bRelayStatus\x12\x10\n\x08\x61\x63\x31_open\x18\x01 \x01(\x08\x12\x10\n\x08\x61\x63\x32_open\x18\x02 \x01(\x08\x12\x11\n\tpbv1_open\x18\x03 \x01(\x08\x12\x11\n\tpbv2_open\x18\x04 \x01(\x08\x12\x11\n\tpbv3_open\x18\x05 \x01(\x08\x12\x11\n\tsol1_open\x18\x06 \x01(\x08\x12\x11\n\tsol2_open\x18\x07 \x01(\x08\x12\x11\n\tsol3_open\x18\x08 \x01(\x08\x12\x11\n\tsol4_open\x18\t \x01(\x08\x12\x11\n\tsol5_open\x18\n \x01(\x08\x12\x11\n\tsol6_open\x18\x0b \x01(\x08\x12\x11\n\tsol7_open\x18\x0c \x01(\x08\x12\x12\n\nsol8a_open\x18\r \x01(\x08\x12\x12\n\nsol8b_open\x18\x0e \x01(\x08\",\n\x0cPadBoxStatus\x12\r\n\x05\x63ont1\x18\x01 \x01(\x08\x12\r\n\x05\x63ont2\x18\x02 \x01(\x08\"!\n\nLRLoadCell\x12\x13\n\x0brocket_mass\x18\x01 \x01(\r\"-\n\x07SOBTemp\x12\x10\n\x08tc1_temp\x18\x01 \x01(\x05\x12\x10\n\x08tc2_temp\x18\x02 \x01(\x05\":\n\rIRTemperature\x12\x14\n\x0c\x61mbient_temp\x18\x01 \x01(\x05\x12\x13\n\x0bobject_temp\x18\x02 \x01(\x05\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'TelemetryMessage_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _TELEMETRYMESSAGE._serialized_start=51
  _TELEMETRYMESSAGE._serialized_end=803
  _GPS._serialized_start=806
  _GPS._serialized_end=1020
  _LATLONG._serialized_start=1022
  _LATLONG._serialized_end=1065
  _ALTITUDETYPE._serialized_start=1067
  _ALTITUDETYPE._serialized_end=1113
  _BARO._serialized_start=1115
  _BARO._serialized_end=1163
  _IMU._serialized_start=1166
  _IMU._serialized_end=1306
  _BATTERY._serialized_start=1308
  _BATTERY._serialized_end=1431
  _BATTERY_POWER_SOURCE._serialized_start=1380
  _BATTERY_POWER_SOURCE._serialized_end=1431
  _FLASH._serialized_start=1433
  _FLASH._serialized_end=1486
  _DMBPRESSURE._serialized_start=1488
  _DMBPRESSURE._serialized_end=1528
  _PBBPRESSURE._serialized_start=1530
  _PBBPRESSURE._serialized_end=1591
  _PBBTEMP._serialized_start=1593
  _PBBTEMP._serialized_end=1650
  _COMBUSTIONCONTROLSTATUS._serialized_start=1652
  _COMBUSTIONCONTROLSTATUS._serialized_end=1774
  _MEVSTATE._serialized_start=1776
  _MEVSTATE._serialized_end=1804
  _RCUPRESSURE._serialized_start=1806
  _RCUPRESSURE._serialized_end=1907
  _RCUTEMP._serialized_start=1909
  _RCUTEMP._serialized_end=1954
  _NOSLOADCELL._serialized_start=1956
  _NOSLOADCELL._serialized_end=2007
  _RELAYSTATUS._serialized_start=2010
  _RELAYSTATUS._serialized_end=2289
  _PADBOXSTATUS._serialized_start=2291
  _PADBOXSTATUS._serialized_end=2335
  _LRLOADCELL._serialized_start=2337
  _LRLOADCELL._serialized_end=2370
  _SOBTEMP._serialized_start=2372
  _SOBTEMP._serialized_end=2417
  _IRTEMPERATURE._serialized_start=2419
  _IRTEMPERATURE._serialized_end=2477
# @@protoc_insertion_point(module_scope)
