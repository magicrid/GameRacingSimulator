#ifndef BOOTS_H
#define BOOTS_H

#include "GroundTransport.h"

namespace Boots
{
    class TRANSPORT_API Boots : public GroundTransport::GroundTransport
    {
    public:
        Boots();
        double getRestTime(int restNumber) override;
    };
}
#endif