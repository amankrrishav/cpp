// Constants

/*
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6
    =======================================
    Total estimate: $63.6
    This estimate is valid for 30 days

    Pseudocode:
        Prompt the user to enter the number of rooms
        Display number of rooms
        Display price per room

        Display cost:  (number of rooms * price per room)
        Display tax:   number of rooms * price per room * tax rate
        Display total estimate: (number of rooms * price per room) +
                               (number of rooms * price per room * tax rate)
        Display estimate expiration time
*/


#include <iostream>

using namespace std;
const int charge {30};
const double tax_rate {0.06};

int main(){

    int room{0};
    
    cout << "Enter the number of rooms for cleaning: ";
    cin >> room;
    
    int total_room_charge = room*charge;
    double total_tax = total_room_charge*tax_rate;
    double total_estimate_charge = total_room_charge+total_tax;

    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Total number of rooms for cleaning: " << room << endl;

    cout << "Price per room is: " << charge << "usd" << endl;

    cout << "Cost for rooms is: " << total_room_charge << endl;

    cout << "Total Tax: " << total_room_charge*tax_rate << endl;

    cout << "-----------------------------------------------" << endl;

    cout << "Total estimate charges: " << total_estimate_charge << endl;

    cout << "This estimate charges are valid for 30 days." << endl;


    
    return 0;

}