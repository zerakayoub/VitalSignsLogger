#include "VitalAnalyzer.h"
#include <iostream>

void VitalAnalyzer::analyze(const VitalSigns &v)
{
    if (v.heartRate < 60)
        std::cout << "WARNING: Low Heart Rate\n";

    if (v.heartRate > 100)
        std::cout << "ALERT: High Heart Rate\n";

    if (v.spo2 < 95)
        std::cout << "WARNING: Low Oxygen\n";

    if (v.respirationRate < 12 || v.respirationRate > 20)
        std::cout << "WARNING: Abnormal Respiration\n";

    if (v.respirationRate < 12 || v.respirationRate > 20)
        std::cout << "WARNING: Abnormal Respiration\n";

    if ((v.bloodPressureSystolic < 90 || v.bloodPressureSystolic > 129) || (v.bloodPressureDiastolic < 60 || v.bloodPressureDiastolic > 80))
        std::cout << "WARNING: Abnormal Blood Pressure\n";
}