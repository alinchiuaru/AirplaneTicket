class Ticket;

class Customer
{
public:
	std::string Name;
	int Age;
	int ID;
	int PhoneNumber;
	int TicketNumber;
	
	Customer();
	
	void AddDetails(std::string, int, int, int, int);
	
	int SearchTicket(Ticket, std::string);
	void BookTicket(Ticket);
	void CancelTicket(int);

	void PrintCustomer();
};