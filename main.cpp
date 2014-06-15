#include <iostream>
#include <string>
#include <fstream>
#include "Ticket.h"
#include "Customer.h"
#include "Flight.h"
using namespace std;

int main()
{
	
	int index = 1, flightNumber, seatsNumber;
	string location, destination;
	
	Flight flights[100];
	

//Read and insert the flights
	ifstream read("flights.txt");
	while(read >> flightNumber >> seatsNumber >> location >> destination)
		{
			flights[index].create(flightNumber, seatsNumber, location, destination);
			index++;
		}
//End read flights

	
	for(int i = 1; i<index; i++)
		{
			flights[i].details();
			cout<<endl;
		}
		
	

}