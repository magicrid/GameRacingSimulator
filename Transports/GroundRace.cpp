#include <iostream>

#include "GroundRace.h"

bool GroundRace::GroundRace::canRegister(Transport::Transport* t)
{
    return dynamic_cast<GroundTransport::GroundTransport*>(t) != nullptr;
}