class Flight;

class Ticket
{
public:
	Ticket();
	
	void create(Flight, int);
	void create(int);
	
	int TicketNumber;
	int FlightNumber;
	std::string Location;
	std::string Destination;
	
	void TicketPrint();
};