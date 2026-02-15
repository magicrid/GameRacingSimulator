#ifndef FASTCAMEL_H
#define FASTCAMEL_H

#include "GroundTransport.h"

namespace FastCamel
{
    class TRANSPORT_API FastCamel : public GroundTransport::GroundTransport
    {
    public:
        FastCamel();
        double getRestTime(int restNumber) override;
    };
}
#endif