#include <iostream>
#include <string>
#include <fstream>
#include "Ticket.h"
#include "Customer.h"
#include "Flight.h"
#include "Interface.h"
using namespace std;

int main()
{
	
	Customer customer;
	Interface gui;
	Flight flights[100];
	Ticket ticket[300];

	int index = 1, flightNumber, seatsNumber;
	string location, destination;
	
	int fNumber, result;
	int seat;
	
	//Read and insert the flights
	ifstream read("flights.txt");
	while(read >> flightNumber >> seatsNumber >> location >> destination)
		{
			flights[index].create(flightNumber, seatsNumber, location, destination);
			index++;
		}
	//End read flights

	//ADD CUSTOMER
	gui.addCustomer(customer);
	


	gui.searchFlight(flights, index);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the flight number you wish to select: "; cin>>fNumber;
	result = gui.selectFlight(flights, index, fNumber);

	cout<<"FLIGHT ID: "<<result<<endl;
	cout<<"You have selected the following flight: "<<endl;
	flights[result].details();
	
	for(int i=1; i<flights[result].Seats; i++)
		ticket[i].create(flights[result], i);

	cout<<"Choose a seat number between 1 and "<<flights[result].Seats<<" :";
	cin>>seat;

	customer.BookTicket(ticket[seat], seat);

	cout<<"YOUR TICKET: "<<endl;
	ticket[seat].TicketPrint();

	
		
			
	

	





















	
	/*for(int i=1; i<flights[1].Seats; i++)
		ticket[i].create(flights[1], i);

	ticket[1].TicketPrint();
	ticket[2].TicketPrint();
	ticket[5].TicketPrint();
	*/
	//gui.searchFlight(flights, index);
	
	cout<<endl;
	
}