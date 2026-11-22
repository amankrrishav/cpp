//CREATE AND DECLARE CLASS & OBJECTS
//access class memebers

#include <iostream>
#include <vector>
using namespace std;

class Player{
    public: //means now we have access to the class 


    //attributes
    string name{"Zack"};
    int health{100};
    
    int xp{0};

    //methods
    void talk(string s){cout << name << " says "<< s <<endl;}
    bool is_dead(); //method which returns t or f basis of health  

};

class Account{
    public: //means now we have access to the class 


    //attributes
    string name{"Ryan"};
    double balance{0.0};

    //methods
    void deposit(double bal){balance +=bal ; cout << "In deposit"<<endl;}
    void withdrawl(double bal){balance-=bal; cout << "In withdrawl" << endl;}

};

int main() {

    Player Aman; //object 
    Aman.name="Aman";
    Aman.health=100;
    Aman.xp=91;
    Aman.talk("hi,there.");


    Player *enemy=new Player; //pointer to a Player Object on heap menory
    (*enemy).name = "Enemy "; 
    (*enemy).xp=12;
    (*enemy).talk(" i will destroy you");
    delete enemy;




    //Player Rishav;
    //Player players[]{Aman, Rishav}; //array of Player objects
    //vector<Player> play_vector {Aman};
    //play_vector.push_back(Rishav);       //vector of Player objects where Rishav(object) is pushed into vector

    //Player *enemy{nullptr};
    //enemy= new Player;
    //delete enemy;




    cout << "------------"<<endl;

    Account Akr;
    Akr.name = "Aman Kr. Rishav";
    Akr.balance=50000.0;
    Akr.deposit(1000.0);
    Akr.withdrawl(1000.0);


    Account Rj;
    Account Joint[]{Akr,Rj}; //array of objects of class=Account
    vector<Account> Joint_Acc{Akr};
    Joint_Acc.push_back(Rj);

    return 0;
}