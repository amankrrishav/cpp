/*
sample pgm for relational operators eg includes use of bool . 
*/
#include <iostream>

using namespace std;

int main(){
    cout << boolalpha;

    int num1{},num2{};

    cout << "Enter any two integers sepearted by space:" << endl;

    cin >> num1 >> num2;

    cout << "num1" << " > " << "num2" << " = " << (num1 > num2) << endl;
    cout << "num1" << " >= " << "num2" << " = " << (num1 >= num2) << endl;
    cout << "num1" << " < " << "num2" << " = " << (num1 < num2 ) << endl;
    cout << "num1" << " <= " << "num2" << " = " << (num1 <= num2) << endl;

    const int lower{7};
    const int upper{11};

    cout << "Enter the integer  greater than lower:" << lower << endl;
    cin >> num1;
    cout << lower << " > " << num1 << " = " << (lower>num1) << endl;

    cout << "Enter the integer smaller than upper:" << upper << endl;
    cin >> num2 ;
    cout << upper << ">=" << num2 << "=" << (upper >= num2 ) << endl;




    return 0;
}