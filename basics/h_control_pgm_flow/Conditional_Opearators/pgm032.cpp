/*ques - Write a C++ program that:
	•	Takes two integers from the user
	•	Finds the maximum number using only the conditional (ternary) operator
	•	Prints the result
*/ 

#include <iostream>
using namespace std;

int main(){
    int a{}, b{};

    cout << "Enter any 2 integers separated by space: ";
    cin >> a >> b;

    int max_val = (a > b) ? a : b;

    cout << "Maximum is " << max_val << endl;

    return 0;
}