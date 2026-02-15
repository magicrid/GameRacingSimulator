#ifndef RACE_H
#define RACE_H

#include <vector>
#include <algorithm>

#include "Transport.h"

namespace Race
{
    class TRANSPORT_API Race 
    {
    protected:
        double distance;
        std::vector<Transport::Transport*> participants;

    public:
        Race(double distance);
        virtual bool canRegister(Transport::Transport* t) = 0;

        void registerTransport(Transport::Transport* t);
        std::vector<std::pair<std::string, double>> startRace();
    };
}
#endif 