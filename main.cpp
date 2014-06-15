#include <iostream>
#include <string>
#include "Ticket.h"
#include "Customer.h"
using namespace std;

int main()
{
	Customer cust;
	Ticket t(1447,"T1447-RO","Bucharest");
	
	t.TicketPrint();
	cout<<endl;
	cust.AddDetails("Alin Chiuaru", 19, 79412, 724268845, 0);
	
	cust.BookTicket(t);

	cout<<endl;


}