class Flight
{
public:
	Flight();
	Flight(int, int, std::string, std::string);
	
	int FlightNumber;
	int Seats;
	std::string Location;
	std::string Destination;
	
	void create(int, int, std::string, std::string);
	void details();

	
};