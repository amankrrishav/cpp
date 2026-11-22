// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room: $25
    Price per large room: $35
    Cost : $110
    Tax: $6.6
    ==============================
    Total estimate: $116.6
    This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

const int charge_small_room {25};
const int charge_large_room {35};
const double tax_rate {0.06};

int main(){

    int small_room{0};
    int large_room{0};

    cout << "Enter the no. of small room: " << endl;
    cin >> small_room;
    cout << "Enter the no. of large room:" << endl;
    cin >> large_room;

    cout << "Estimate of carpet cleaning service:" << endl;

    cout << "Total small room:" << small_room << endl;
    cout << "Total large room:" << large_room << endl;

    cout << "Price per small room:" << charge_small_room << endl;
    cout << "Price per large room:" << charge_large_room << endl;

    double total_charge_small_room = small_room*charge_small_room;
    double total_charge_large_room = large_room*charge_large_room;
    double total_charge = total_charge_small_room+total_charge_large_room;
    cout << "Total cost of rooms:" << total_charge << endl;

    double total_tax= tax_rate*total_charge;
    cout << "Total tax:" << total_tax <<endl;

    cout << "-----------------------------" << endl;
    cout << "-----------------------------" << endl;


    double total_estimate= total_charge+total_tax;
    cout << "Total estimate:" << total_estimate << endl;
    cout << "This estimate is valid for 30 days from today >_<" << endl;
    return 0;

}