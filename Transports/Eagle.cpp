#include <iostream>

#include "Eagle.h"

Eagle::Eagle::Eagle() : AirTransport("Îð¸ë", 8) {}

double Eagle::Eagle::reduction(double) 
{
    return 0.06;
}