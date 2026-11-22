//copy cons
#include<iostream>
using namespace std;

class Account{
    private:
    string name;
    double balance;

    public:
    Account(string n, double bal){
        name = n;
        balance = bal;
    }

    // Copy Constructor
    Account(const Account &source){
        name = source.name;
        balance = source.balance;
        cout << "Copy Created!" << endl;
    }

    string get_name(){ return name; }
    double get_bal(){ return balance; }
};

int main(){
    Account Aman("aman kr rishav", 100000.0);  // original
    Account Ravi(Aman);                         // copy of Aman

    cout << Ravi.get_name() << endl;   // aman kr rishav
    cout << Ravi.get_bal() << endl;    // 100000
return 0;    
}