#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;

class Customer
{
public:
	
	string CustomerId;
	string Name;
	string Address;
	int PhoneNo;
	int Age;

	void AddDetails();
	void ModifyDetails();
	Customer();
	~Customer();
	
};