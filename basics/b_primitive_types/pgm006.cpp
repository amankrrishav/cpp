//in this pgm i just have to show a employees details 

#include<iostream>

using namespace std;

int main(){

    string name;

    int age {21};

    double hourly_wage {100};

    cout << "Enter the employee's name:";
    cin >> name;

    cout << "Employee's name is: " << name << endl;
    cout << "Employee's age is: " << age << endl;
    cout << "Employee's hourly wage is: " << hourly_wage << endl;


    return 0;

}