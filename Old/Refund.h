#include "Date.h"
#include "Time.h"
#include <string>
#include "Customer.h"
using namespace std;

class Refund : public Customer
{
public:
	float Amount;
	string CustomerId;
	Refund();
	~Refund();
	void RefundAmount();
};