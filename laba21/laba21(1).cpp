#include <iostream>
using namespace std;
class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();
	double getId() ;
    double getCapacity() ;
    double getReserved() ;
	
private:
	int id;
	int capacity;
	int reserved;
};
double FlightBooking::getId() {
    return id;
}

double FlightBooking::getCapacity() {
    return capacity;
}
double FlightBooking::getReserved() {
    return reserved;
}
void FlightBooking::printStatus()
{
double percentage = (double)reserved / capacity * 100;
cout << "Flight (ID = "<< getId()  << ") = "<< percentage << "%  seats taken" << endl; 
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
this->id=id;
this->capacity=capacity;
this->reserved=reserved;
}
int main() {
	int reserved = 0,
	    capacity = 0;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();
	return 0;
    
}