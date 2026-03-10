#include "DataLogger.h"
#include <fstream>

void DataLogger::log(const VitalSigns &v)
{
    std::ofstream file("vitals_log.csv", std::ios::app);

    file << "\n"
         << v.timestamp
         << "Heart Rate: " << v.heartRate << "\n"
         << "SpO2: " << v.spo2 << "\n"
         << "Respiration Rate: " << v.respirationRate << "\n";
}