#ifndef CAMEL_H
#define CAMEL_H

#include "GroundTransport.h"

namespace Camel
{
    class TRANSPORT_API Camel : public GroundTransport::GroundTransport 
    {
    public:
        Camel();
        double getRestTime(int restNumber) override;
    };
}
#endif