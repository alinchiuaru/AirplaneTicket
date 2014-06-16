class Customer;
class Flight;

class Interface
{
public:
	Interface();
	
	void addCustomer(Customer);
	void searchFlight(Flight flight[100], int);
	int selectFlight(Flight flight[100], int, int);
};