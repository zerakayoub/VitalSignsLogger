#ifndef DATA_LOGGER_H
#define DATA_LOGGER_H

#include "SensorSimulator.h"

class DataLogger
{
public:
    void log(const VitalSigns &vitals);
};

#endif