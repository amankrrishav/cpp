//make a class for ACcount and access it after making an object in main

#include <iostream>
#include<string>
using namespace std;

//make a Account class. 
//Implement Member Methods

class Account{

    //attributes
    private:
    string name{"Default_Name"};
    double balance{0.0};
    long Acc_No{0000000000};

    //methods
    public:
    void deposit(double bal){
        balance=balance+bal;
        cout<< "In deposit" <<endl;
        cout<< "Your current balance is: "<< balance<<endl;
    }
    
    void withdrawl(double bal){
        balance=balance-bal;
        cout<< "In withdrawl"<<endl;
        cout<< "Your current balance is: "<<balance<<endl;

    }
};

int main() {
    Account AMAN;
    //AMAN.name= "aman kr rishav"; //compile error
    //AMAN.balance = 100000000.0;  //compile error

    AMAN.deposit(10000.0);  //OK
    AMAN.withdrawl(1.0);
    return 0;
}