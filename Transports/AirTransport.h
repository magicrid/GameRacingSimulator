#ifndef AIRTRANSPORT_H
#define AIRTRANSPORT_H

#include "Transport.h"

namespace AirTransport
{
	class TRANSPORT_API AirTransport : public Transport::Transport
	{
	public:
		AirTransport(std::string name, double speed);
		virtual double reduction(double distance) = 0;
		double calculateTime(double distance) override;
	};
}

#endif 