#include <iostream>

#include "FastCamel.h"

FastCamel::FastCamel::FastCamel() : GroundTransport("Верблюд-быстроход", 40, 10) {}

double  FastCamel::FastCamel::getRestTime(int restNumber) 
{
    if (restNumber == 1) return 5;
    if (restNumber == 2) return 6.5;
    return 8;
}