#ifndef MAGICCARPET_H
#define MAGICCARPET_H

#include "AirTransport.h"

namespace MagicCarpet
{
	class TRANSPORT_API MagicCarpet : public AirTransport::AirTransport
	{
	public:
		MagicCarpet();
		double reduction(double distance) override;
	};
}

#endif 