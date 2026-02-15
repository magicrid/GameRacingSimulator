#ifndef MIXEDRACE_H
#define MIXEDRACE_H

#include "Race.h" 

namespace MixedRace
{
    class TRANSPORT_API MixedRace : public Race::Race
    {
    public:
        MixedRace(double d) : Race(d) {}
        bool canRegister(Transport::Transport*) override
        {
            return true;
        }
    };
}

#endif 