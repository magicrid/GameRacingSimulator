#include <iostream>

#include "Boots.h"

Boots::Boots::Boots() : GroundTransport("Ботинки-вездеходы", 6, 60) {}

double Boots::Boots::getRestTime(int restNumber) 
{
    return restNumber == 1 ? 10 : 5;
}