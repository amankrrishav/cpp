//PROGRAM FOR - USD TO INR CONVERTOR (Taking real time usd rate)
//Current INR Rate - 91.08

#include <iostream>

using namespace std;

int main(){

    const double inr_rate = 91.08;

    double inr{0.0};
    double usd{0.0};

    cout << "WELCOME TO INR CONVERTOR MACHINE. ;)" << endl;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;

    cout << "Enter the Dollars U wish to convert : " << endl;
    cin >> usd;
    inr = usd * inr_rate  ;
    
    cout << "Total inr after conversion are:" << inr << endl;
    return 0;
}
//made by - admin