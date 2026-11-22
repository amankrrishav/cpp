//CREATE AND DECLARE CLASS & OBJECTS
#include <iostream>
#include <vector>
using namespace std;

class Player{
    //attributes
    string name{"Zack"};
    int health{100};
    
    int xp{0};

    //methods
    void talk(string);
    bool is_dead(); //method which returns t or f basis of health  

};

class Account{
    //attributes
    string name{"Ryan"};
    double balance{0.0};

    //methods
    bool deposit(double); //will give t or f 
    bool withdrawl(double); //will give t or f

};

int main() {
    Player Aman; //object 
    Player Rishav; //object

    Player players[]{Aman, Rishav}; //array of Player objects
    vector<Player> play_vector {Aman};
    play_vector.push_back(Rishav);       //vector of Player objects where Rishav(object) is pushed into vector

    Player *enemy{nullptr};
    enemy= new Player;
    delete enemy;

    cout << "------------"<<endl;

    Account Kumar1;
    Account Kumar2;

    Account Joint[]{Kumar1,Kumar2}; //array of objects of class=Account

    vector<Account> Joint_Acc{Kumar1};
    Joint_Acc.push_back(Kumar2);

    return 0;
}