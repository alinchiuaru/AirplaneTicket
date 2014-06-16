#include <iostream>
#include <string>
#include "Ticket.h"
#include "Flight.h"
using namespace std;

Ticket::Ticket() {
	TicketNumber = 0000;
	Location = "Default Location";
	Destination = "Default Destination";
	FlightNumber = 0000;
	SeatNumber = 0000;
}

void Ticket::create(int nr) {
	TicketNumber = nr;
	Location = "Default Location";
	Destination = "Default Destination";
	FlightNumber = 0000;
	SeatNumber = 0000;
}

void Ticket::create(Flight f, int nr) {
	TicketNumber = 1000+f.Seats - nr; //100 (000)
	Location = f.Location;
	Destination = f.Destination;
	FlightNumber = f.FlightNumber;
	SeatNumber = nr;
}


void Ticket::TicketPrint() {
	cout<<"===============TICKET==============="<<endl; 
	cout<<"Ticket Number: #"<<TicketNumber<<endl;
	cout<<"Flight Number: #"<<FlightNumber<<endl;
	cout<<"Seat Number: #"<<SeatNumber<<endl;
	cout<<"Boarding Location: "<<Location<<endl;
	cout<<"Destination: "<<Destination<<endl;
	cout<<"===================================="<<endl; 
}
