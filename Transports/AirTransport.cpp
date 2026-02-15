#include <iostream>

#include "AirTransport.h"

AirTransport::AirTransport::AirTransport(std::string name, double speed)
    : Transport(name, speed) {}

double AirTransport::AirTransport::calculateTime(double distance)
{
    double reduced = distance * (1 - reduction(distance));
    return reduced / speed;
}