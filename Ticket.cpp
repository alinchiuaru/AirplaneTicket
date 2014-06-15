#include <iostream>
#include <string>
#include "Ticket.h"
using namespace std;

Ticket::Ticket() {
	TicketNumber = 0000;
	TicketName = "Default Ticket Name";
	Destination = "Default Destination";
}

Ticket::Ticket(int n, string tn, string d) {
	TicketNumber = n;
	TicketName = tn;
	Destination = d;
}


void Ticket::TicketPrint() {
	cout<<"===============TICKET==============="<<endl; 
	cout<<"Destination: "<<Destination<<endl;
	cout<<"Ticket Name: "<<TicketName<<endl;
	cout<<"Ticket Number: "<<TicketNumber<<endl;
	cout<<"===================================="<<endl; //36
}
