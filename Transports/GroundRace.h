#ifndef GROUNDRACE_H
#define GROUNDRACE_H

#include "Race.h"
#include "GroundTransport.h"

namespace GroundRace
{
    class TRANSPORT_API GroundRace : public Race::Race
    {
    public:
        GroundRace(double d) : Race(d) {}
        bool canRegister(Transport::Transport* t) override;
    };
}

#endif 