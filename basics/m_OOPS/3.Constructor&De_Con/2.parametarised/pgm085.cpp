//parametarised cons
//eg
#include<iostream>
using namespace std;
class Account{
    private:
    string name;
    double balance;

    public:
    // Parameterized Constructor
    Account(string n, double bal){
        name = n;
        balance = bal;
    }

    string get_name(){ return name; }
    double get_bal(){ return balance; }
};

int main(){
    Account Aman("aman kr rishav", 100000.0);  // pass values directly

    cout << Aman.get_name() << endl;  // aman kr rishav
    cout << Aman.get_bal() << endl;   // 100000
return 0;    
}