#include <iostream>
using namespace std;

int main(){

    int num1 {10}; //initialisation (NOT ASSIGNMENT
    int num2 {20}; // " "

    // const int num1 {10}; // in this case the num1 val wont be changed when pgm is compiled it will remain whats initialised

    //num1 = 100;    // ASSIGNMENT (CHANGE OF VALUE FROM INITIALIZATION) NOT Equvivalent
    //num1 = num2;
    //num1 = num2 = 1000;

    cout << "Num1 is " <<num1 << endl;
    cout << "Num2 is " <<num2 << endl;

    return 0;
}

//output => Num1 is 100
        //  Num2 is 20