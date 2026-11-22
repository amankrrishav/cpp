//default cons 
//example
#include<iostream>
using namespace std;

class Account{
    private:
    string name;
    double balance;

    public:
    // Default Constructor
    Account(){
        name = "Unknown";
        balance = 0.0;
        cout << "Account Created!" << endl;
    }

    string get_name(){ return name; }
    double get_bal(){ return balance; }
};

int main(){
    Account Aman;  // automatically calls default constructor

    cout << Aman.get_name() << endl;  // Unknown
    cout << Aman.get_bal() << endl;   // 0
return 0;    
}