/*Find maximum of 3 numbers using ternary only
*/

#include <iostream>
using namespace std;
int main(){

    int a{},b{},c{};
    int num;

    cout << "PLease enter any three numbers seperated by space: ";
    cin>> a >> b >> c;

    num=(a>b)?((a>c)? a:c):((b>c)?b:c); //used nested ternary expression

    
    cout << "The maximum of three numbers entered is: " << num << endl;
    cout << "--------------------------------------------- "<<endl;

    //pgm to calculate grades

    int min;
    min=0;
    int max;
    max=100;
    int marks{};


    cout << "\n*Welcome to grade calculator*"<<endl;
    cout << "PLease enter your marks between " << min << " and " << max << " : ";
    cin >> marks;

    char grade;

    grade = (marks>=90)? 'A':  //uisng ternary operator expr
    (marks>=75)? 'B':          // ''    ''      ''      ''
    (marks>=50)? 'C':'F';      // ''    ''      ''      ''

    string result;
    result = (marks<50)? "Failed":"Passed";

    cout << "Upon evaluation ,You got: " << grade << " and you " << result <<endl;
    cout << "-----------------------------------------------"<<endl;

    //pgm to 
    return 0;
}