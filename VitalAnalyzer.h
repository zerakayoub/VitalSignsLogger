#ifndef VITAL_ANALYZER_H
#define VITAL_ANALYZER_H

#include "SensorSimulator.h"

class VitalAnalyzer
{
public:
    void analyze(const VitalSigns &vitals);
};

#endif