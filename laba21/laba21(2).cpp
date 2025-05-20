#include <iostream>
using namespace std;
class FlightBooking {
public:
FlightBooking(int id, int capacity, int reserved);
void printStatus();
bool reserveSeats(int number_ob_seats);
bool cancelReservations(int number_ob_seats);
private:
int id;
int capacity;
int reserved;
};
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
this->id=id;
this->capacity=capacity;
if (reserved < 0){
        this->reserved = 0;
}
else{
this->reserved=reserved;
}
}
bool FlightBooking::reserveSeats(int number_of_seats)
{
int max_reservable = capacity * 1.05;
   if (reserved + number_of_seats <= max_reservable) {
        reserved += number_of_seats;
        return true;
    } else {
        return false;
    }
     return false;
}
bool FlightBooking::cancelReservations(int number_of_seats)
{
 if (number_of_seats > reserved) {
        return false;
    } else {
        reserved -= number_of_seats;
        return true;
    }
     return false;
}
void FlightBooking::printStatus()
{
    double percentage = (double)reserved / capacity * 100;
    cout << "Flight " << id << " : " << reserved << "/" << capacity
         << " (" << (int)(percentage + 0.5) << "%) seats reserved" << endl;
}
int main() {
int reserved = 0,
    capacity = 0;
cout << "Provide flight capacity: ";
cin >> capacity;
cout << "Provide number of reserved seats: ";
cin >> reserved;
cin.ignore(); 
FlightBooking booking(1, capacity, reserved);
string command = "";
while (command != "quit")
{
booking.printStatus();
cout << "What would you like to do?: ";
 getline(cin, command);
 if (command == "quit") {
            break;
        }
 if (command.find("add") == 0) {
            int n = stoi(command.substr(4)); // Беремо число після "add "
            if (!booking.reserveSeats(n)) {
                cout << "Cannot perform this operation" << endl;
            }
        } 
        else if (command.find("cancel") == 0) {
            int n = stoi(command.substr(7)); // Беремо число після "cancel "
            if (!booking.cancelReservations(n)) {
                cout << "Cannot perform this operation" << endl;
            }
        }
}
return 0;
}