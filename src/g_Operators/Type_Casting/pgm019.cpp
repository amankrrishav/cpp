/*
ask user to enter 3 ints
add all 3
avg of all

display :
all ints
sum of em
avg 

use: static_cast<type>

*/

#include <iostream>

using namespace std;

int main(){
    int num1{0};
    int num2{0};
    int num3{0};
    const int number_of_ints{3};

    cout << "Enter 3 integers of your choice seperated by space:" << endl;
    cin >> num1 >> num2 >> num3;

    int sum{0};
    sum = num1+num2+num3;
    cout << "Sum of the integers is:" << sum << endl;

    double average{0.0};
    average = static_cast<double>(sum)/number_of_ints; // conversion from lower to higher of int sum
    cout << "Average of the integers is:" << average << endl;

    return 0;
}