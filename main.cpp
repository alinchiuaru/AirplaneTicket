#include <iostream>
#include <string>
#include "Ticket.h"
#include "Customer.h"
#include "Flight.h"
using namespace std;

int main()
{
	Customer cust;
	Flight fl(9977,30,"Timisoara","Bucharest");
	Ticket t[100];

	for(int i=1; i<=fl.Seats; i++)
		t[i].create(fl,i);
	
	
	
	cout<<endl;
	cust.AddDetails("Alin Chiuaru", 19, 79412, 724268845, 0);
	

	cust.BookTicket(t[5]);

	cout<<endl;


}