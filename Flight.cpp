#include <iostream>
#include <string>
#include "Flight.h"
using namespace std;

Flight::Flight() {
	FlightNumber = 0000;
	Seats = 0000;
	Location = "Default Location";
	Destination = "Default Destination";
}

Flight::Flight(int f, int s, string l, string d) {
	FlightNumber = f;
	Seats = s;
	Location = l;
	Destination = d;
}

void Flight::create(int f, int s, string l, string d) {
	FlightNumber = f;
	Seats = s;
	Location = l;
	Destination = d;
}

void Flight::details() {
	cout<<"===============FLIGHT==============="<<endl; 
	cout<<"Flight Number: #"<<FlightNumber<<endl;
	cout<<"Available Seats: "<<Seats<<endl;
	cout<<"Boarding: "<<Location<<endl;
	cout<<"Landing: "<<Destination<<endl;
	cout<<"===================================="<<endl; //36
}