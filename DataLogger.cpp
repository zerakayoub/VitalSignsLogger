#include "DataLogger.h"
#include <fstream>

void DataLogger::log(const VitalSigns &v)
{
    std::ofstream file("vitals_log.csv", std::ios::app);

    file << v.timestamp << ","
         << v.heartRate << ","
         << v.spo2 << ","
         << v.respirationRate
         << "\n";
}