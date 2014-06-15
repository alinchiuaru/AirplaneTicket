#include <iostream>
#include <string>
#include "Customer.h"
#include "Ticket.h"
using namespace std;

Customer::Customer()
{
	Name = "Customer Name";
	Age = 99;
	ID = 000;
	PhoneNumber = 012345;
	TicketNumber = 0000;
}

void Customer::AddDetails(string N, int A, int I, int P, int T) {
	Name = N;
	Age = A;
	ID = I;
	PhoneNumber = P;
	TicketNumber = T;
}

void Customer::BookTicket(Ticket ticket) {
	TicketNumber= ticket.TicketNumber;
	cout<<"BOOKED(#"<<TicketNumber<<")"<<endl;

}

void Customer::PrintCustomer() {
	cout<<"================CUSTOMER================"<<endl;
	cout<<"Name: "<<Name<<endl;
	cout<<"Age: "<<Age<<endl;
	cout<<"ID: "<<ID<<endl;
	cout<<"Phone Number: "<<PhoneNumber<<endl;
	cout<<"Ticket Number: "<<TicketNumber<<endl;
	cout<<"========================================"<<endl; 
}