#include "SensorSimulator.h"
#include <random>
#include <chrono>
#include <ctime>

VitalSigns SensorSimulator::readVitals()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> hr(50, 120);
    std::uniform_int_distribution<> spo2(85, 100);
    std::uniform_int_distribution<> resp(8, 25);
    std::uniform_int_distribution<> bp_systolic(90, 140);
    std::uniform_int_distribution<> bp_diastolic(60, 90);

    VitalSigns v;

    v.heartRate = hr(gen);
    v.spo2 = spo2(gen);
    v.respirationRate = resp(gen);
    v.bloodPressureSystolic = bp_systolic(gen);
    v.bloodPressureDiastolic = bp_diastolic(gen);
    v.bloodPressure = std::to_string(v.bloodPressureSystolic) + "/" + std::to_string(v.bloodPressureDiastolic);

    time_t now = time(0);
    v.timestamp = ctime(&now);

    return v;
}