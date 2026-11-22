//if statement

#include <iostream>
using namespace std;
int main(){
    int integer;
    cout << "Enter a integer of your choice:";
    cin >> integer;
    if (integer<0)
    cout << "Integer is negative." << endl;
    
    if(integer >=1)
    cout << "Integer is positive." << endl;
    
    else
    cout << "zero" << endl;
    
    return 0;
}
