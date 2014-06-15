#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;

class Customer
{
public:
	
	int CustomerId;
	string Name;
	string Address;
	int PhoneNo;
	int Age;

	void AddDetails();
	void ModifyDetails();
	Customer(string Name, int CustomerId, string Address, int PhoneNo, int Age);
	~Customer();
	
};