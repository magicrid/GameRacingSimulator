#ifndef TRANSPORT_H
#define TRANSPORT_H

#ifndef TRANSPORT_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif

namespace Transport
{
	class TRANSPORT_API Transport
	{
	protected:
		std::string name;
		double speed;

	public:
		Transport(const std::string& name, double speed);
		virtual ~Transport() = default;

		std::string getName() const;

		virtual double calculateTime(double distance) = 0;
	};
}

#endif 
