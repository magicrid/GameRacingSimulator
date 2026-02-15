#ifndef GROUNDTRANSPORT_H
#define GROUNDTRANSPORT_H

#include "Transport.h"

namespace GroundTransport
{
	class TRANSPORT_API GroundTransport : public Transport::Transport
	{
	protected:
		double moveLimit;

	public:
		GroundTransport(const std::string& name, double speed,double moveLimit);

		virtual double getRestTime(int restTime) = 0;

		double calculateTime(double distance) override;
	};
}

#endif 