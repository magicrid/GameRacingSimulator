#include <iostream>

#include "MagicCarpet.h"

MagicCarpet::MagicCarpet::MagicCarpet() : AirTransport("Ковёр-самолёт", 10) {}

double MagicCarpet::MagicCarpet::reduction(double distance) 
{
    if (distance < 1000) return 0;
    if (distance < 5000) return 0.03;
    if (distance < 10000) return 0.1;
    return 0.05;
}