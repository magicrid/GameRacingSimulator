#ifndef AIRRACE_H
#define AIRRACE_H

#include "Race.h"
#include "AirTransport.h"

namespace AirRace
{
    class TRANSPORT_API AirRace : public Race::Race
    {
    public:
        AirRace(double d) : Race(d) {}
        bool canRegister(Transport::Transport* t) override;
    };
}

#endif 