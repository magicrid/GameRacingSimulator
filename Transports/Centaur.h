#ifndef CENTAUR_H
#define CENTAUR_H

#include "GroundTransport.h"

namespace Centaur
{
    class TRANSPORT_API Centaur : public GroundTransport::GroundTransport
    {
    public:
        Centaur();
        double getRestTime(int) override;
    };
}
#endif