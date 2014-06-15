#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;

class Ticket
{
public:
	
	string Source;
	string Destination;
	Date DateOfJoureny;
	Time Time;
	string FlightNo;
	string FlightName;

	Ticket();
	~Ticket();
	
};