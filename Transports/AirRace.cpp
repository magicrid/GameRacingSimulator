#include <iostream>

#include "AirRace.h"

bool AirRace::AirRace::canRegister(Transport::Transport* t) 
{
    return dynamic_cast<AirTransport::AirTransport*>(t) != nullptr;
}