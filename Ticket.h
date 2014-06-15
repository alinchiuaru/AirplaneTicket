class Ticket
{
public:
	Ticket();
	Ticket(int, std::string, std::string);

	int TicketNumber;
	std::string TicketName;
	std::string Destination;
	void TicketPrint();
};