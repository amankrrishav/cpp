//Mem Methods 2nd

#include <iostream>
using namespace std;

class Account{
    //attributes //always private
    private:
    string name{"Default/name"};
    double balance{0.0};

    //methods
    public:
    //declared inline
    void set_bal(double bal){
       if(bal >=0){
        balance = bal;
       } 
    }
    double get_bal(){
        return balance;
    }


    //just prototype of methods
    void set_name(string s);
    string get_name();

    bool deposit(double amt);
    bool withdrawl(double amt);
}; //ends class 

void Account::set_name(string s){
    name=s;   
}
string Account::get_name(){
    return name;
}


bool Account::deposit(double amt){
    //verify the bal 1st
    if(amt > 0 ){
        balance = balance + amt;
        return true;
    }else{
        return false;
    }
    
}

bool Account::withdrawl(double amt){
    //if else
    if(balance >=amt){
        balance = balance -amt;
        return true;
    }else{
        return false;
    }
}
int main() {
    //create an object and access the methods previously made
    Account Aman;

   
    cout << "Balance: $" << Aman.get_bal() << endl;
    Aman.set_name("aman kr rishav"); // cant use name now beacuse its private and we r going through public method
    Aman.set_bal(100000.0);
    cout << "Account Holder: " << Aman.get_name() << endl;
    cout << "Balance: $" << Aman.get_bal() << endl;

    if(Aman.deposit(1000)){
        cout << "Deposit OK!" <<endl;
    }else{
        cout << "Deposit Failed!"<<endl;
    }

    if(Aman.withdrawl(1)){
        cout << "Withdrawl Done!"<<endl;
    }else{
        cout << "Not Sufficient funds in Acc!"<<endl;
    }

    cout << "Account Holder: " << Aman.get_name() << endl;
    cout << "Balance: $" << Aman.get_bal() << endl;
    return 0;
}