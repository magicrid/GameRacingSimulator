#ifndef EAGLE_H
#define EAGLE_H

#include "AirTransport.h"

namespace Eagle
{
	class TRANSPORT_API Eagle : public AirTransport::AirTransport
	{
	public:
		Eagle();
		double reduction(double) override;
	};
}

#endif 