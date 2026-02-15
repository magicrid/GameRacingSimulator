#include <iostream>

#include "Centaur.h"

Centaur::Centaur::Centaur() : GroundTransport("Кентавр", 15, 8) {}

double Centaur::Centaur::getRestTime(int) 
{
    return 2;
}