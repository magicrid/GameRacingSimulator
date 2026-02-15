#include <iostream>

#include "Broom.h"

Broom::Broom::Broom() : AirTransport("Метла", 20) {}

double Broom::Broom::reduction(double distance) 
{
    return (int)(distance / 1000) * 0.01;
}