class Ticket;
class Flight;

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
	void AddDetails(std::string, int, int, int);
	
	void BookTicket(Ticket, int);
	void PrintCustomer();
};