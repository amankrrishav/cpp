//write a pgm for converting dollars to many small units 
// such as - 1 dollar =100 cents
//           1 quarter =25 cents
//           1 dime =10 cents
//           1 nikkel =5 cents
//           1 penny =1 cent

// exmaple - 287 cents input 
// ans - 2,3,1,0,2

#include <iostream>
using namespace std;
int main(){
    int cents{};
    int dollar{};
    int quarter{};
    int dime{};
    int nikkel{};
    int penny{};

    const int dr_v{100};
    const int qr_v{25};
    const int de_v{10};
    const int nl_v{5};
    const int py_v{1};

    int balance;


    cout << "Enter the amount of cents You would like to change: ";
    cin >> cents;

    dollar=cents/dr_v;
    balance=cents%dr_v;

    quarter=balance/qr_v;
    balance%=qr_v;

    dime=balance/de_v;
    balance%=de_v;

    nikkel=balance/nl_v;
    balance%=nl_v;

    penny=balance;

    cout << "Dollars: " << dollar << endl;
    cout << "Quarter: " << quarter << endl;
    cout << "Dime: " << dime << endl;
    cout << "Nikkel: " << nikkel << endl;
    cout << "Penny: " << penny << endl;

    return 0;
}

// i used greedy method - 
// in this method i m always asking for largest value 
// Local best choice = Global best result
// it doesnt work always only when upper line assigment is fulfilled 