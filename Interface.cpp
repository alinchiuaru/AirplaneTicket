#include <iostream>
#include <string>
#include "Interface.h"
#include "Customer.h"
#include "Flight.h"

using namespace std;

Interface::Interface() {}

void Interface::addCustomer(Customer customer) {
	string name;
	int age, id, phoneNumber;

	cout<<"////////////////////////////"<<endl;
	cout<<"//////////AIRPLANE//////////"<<endl;
	cout<<"///////////TICKET///////////"<<endl;
	cout<<"////////////////////////////"<<endl;
	cout<<"Enter your personal details: "<<endl;
	cout<<"1) Full name: "; getline(cin,name);
	cout<<endl;
	cout<<"2) Age: "; cin>>age;
	cout<<endl;
	cout<<"3) ID Number: "; cin>>id;
	cout<<endl;
	cout<<"4) Phone Number: "; cin>>phoneNumber;
	cout<<endl;
	cout<<"////////////////////////////"<<endl;
	cout<<"////////////////////////////"<<endl;
	customer.AddDetails(name,age,id,phoneNumber);
	cout<<endl;
}

void Interface::searchFlight(Flight flight[100], int index) {
	int foundFlight = 0;
	int i = 1;
	int option, flightN;
	string loc, dest;

	cout<<"Search flight by: "<<endl;
	cout<<"1) Flight number."<<endl;
	cout<<"2) Boarding location."<<endl;
	cout<<"3) Destination."<<endl;
	cout<<"Option: "; cin>>option;

	do { 
		switch(option) {
			
				case 1:
					cout<<"Enter flight number: "; cin>>flightN;
					for(i=1;i<index;i++)
					{
						if(flight[i].FlightNumber == flightN)
							{
								flight[i].details();
								foundFlight = 1;
							}
					}		
						if(foundFlight==0)
							cout<<"FLIGHT NOT FOUND!"<<endl;
					
				break;
			
			case 2:
				cout<<"Enter boarding location: "; 
				cin>>loc;
				for(i=1;i<index;i++)
					{
					if(flight[i].Location == loc)
						{
							flight[i].details();
							foundFlight = 1;
						}
					}
					if(foundFlight==0)
						cout<<"FLIGHT NOT FOUND!"<<endl;
			break;

			case 3:
				cout<<"Enter destination: "; 
				cin>>dest;
				for(i=1;i<index;i++)
				{
					if(flight[i].Destination == dest)
						{
							flight[i].details();
							foundFlight = 1;
						}
				}
					if(foundFlight==0)
						cout<<"FLIGHT NOT FOUND!"<<endl;
			break;
		}
	} while(foundFlight==0);
}

int Interface::selectFlight(Flight flight[100], int index, int fNumber) {
	int i;
	for(i=1; i<index; i++)
		if(flight[i].FlightNumber == fNumber)
			return i;
}