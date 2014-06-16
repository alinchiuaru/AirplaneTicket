class Flight;

class Ticket
{
public:
	Ticket();
	
	void create(Flight, int);
	void create(int);
	
	int TicketNumber;
	int FlightNumber;
	int SeatNumber;
	std::string Location;
	std::string Destination;
	
	void TicketPrint();
};