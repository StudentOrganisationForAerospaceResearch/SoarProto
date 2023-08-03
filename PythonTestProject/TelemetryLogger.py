import os
import time

loadCellLogspath = "/home/soar/Desktop/SoarProtoLocal/PythonTestProject/LoadcellLogs"
TelemetryLogsPath = "/home/soar/Desktop/SoarProtoLocal/PythonTestProject/TeleLogs"

def TelemetryLogger(filename, dataPair):
    if os.path.exists(TelemetryLogsPath) is False:
        os.makedirs(TelemetryLogsPath)

    file_path = os.path.join(TelemetryLogsPath, filename)

    file_exists = os.path.exists(file_path)

    logFile = open(file_path, "a" if file_exists else "w")

    if not file_exists:
        logFile.write("time " + " ".join(dataPair.keys()) + "\n")

    logFile.write(str(time.time()) + " ")

    for key in dataPair:
        logFile.write(str(dataPair[key]) + " ")

    logFile.write("\n")
    logFile.close()

def ClearLogs():
    if os.path.exists(TelemetryLogsPath) is False:
        return
    os.rmdir(TelemetryLogsPath)

def LoadCellLogger(filename, value):
    if os.path.exists(loadCellLogspath) is False:
        os.makedirs(loadCellLogspath)

    file_path = os.path.join(loadCellLogspath, filename)

    logFile = open(file_path, "w")

    logFile.write(str(value))

    logFile.close()

def LoadCellLogReader(filename, default):
    file_path = os.path.join(loadCellLogspath, filename)

    if os.path.exists(file_path) is False:
        return default

    logFile = open(file_path, "r")

    value = logFile.read()

    if value is "":
        return default

    logFile.close()

    return float(value)
