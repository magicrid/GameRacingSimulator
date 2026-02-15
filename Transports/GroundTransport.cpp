#include <iostream>

#include "GroundTransport.h"

GroundTransport::GroundTransport::GroundTransport(const std::string& name, double speed, double moveLimit)
    : Transport(name, speed), moveLimit(moveLimit) {}

double GroundTransport::GroundTransport::calculateTime(double distance) 
{
    double travelTime = distance / speed;

    int rests = travelTime / moveLimit;
    if (travelTime == rests * moveLimit && rests > 0)
        rests--;

    double restTime = 0;
    for (int i = 1; i <= rests; i++)
        restTime += getRestTime(i);

    return travelTime + restTime;
}