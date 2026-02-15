#ifndef BROOM_H
#define BROOM_H

#include "AirTransport.h"

namespace Broom
{
	class TRANSPORT_API Broom : public AirTransport::AirTransport
	{
	public:
		Broom();
		double reduction(double distance) override;
	};
}

#endif 