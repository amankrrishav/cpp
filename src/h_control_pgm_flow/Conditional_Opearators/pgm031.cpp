// ques - to check if input is positive , negative or zero

#include<iostream>
using namespace std;
int main(){
    int integer{};
    cout << "Enter any integer as you like:";
    cin >> integer;
    string result = (integer > 0) ? "positive" : (integer ==0) ? "zero" : "negative";
    cout << integer << " is " << result << endl;
    return 0;
}