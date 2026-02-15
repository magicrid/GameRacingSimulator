#include <iostream>

#include "Camel.h"

Camel::Camel::Camel() : GroundTransport("Верблюд", 10, 30) {}

double Camel::Camel::getRestTime(int restNumber) 
{
    return restNumber == 1 ? 5 : 8;
}