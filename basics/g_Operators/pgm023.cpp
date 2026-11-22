/*section question
WRITE A PROGRAM :
1. ASK USER TO ENTER AN INTEGER (representing no of cents/paisa);
2. assume no of cents is zero or more (initilise it to 0);
3. display how to provide the change

    1$=100cents
    1quid=25cents
    1dime=10cents
    1n=5cents
    1penny=1cent

//can use modulo operator
//display this as distribution 
*/

#include <iostream>
using namespace std;
int main(){

    int no_of_cent{0};

    const int dollar_val{100};
    const int quid_val{25};
    const int dime_val{10};
    const int nikkl_val{5};
    const int penny_val{1};

    int dollar,quid,dime,nikkl,penny;
    int balance;

    cout << "Enter the number of cents:" << endl;
    cin >> no_of_cent;

    dollar = no_of_cent/dollar_val;
    balance=no_of_cent%dollar_val;

    quid = balance/quid_val;
    balance%=quid_val;

    dime = balance/dime_val;
    balance%=dime_val;

    nikkl = balance/nikkl_val;
    balance%=nikkl_val;

    penny=balance;

    cout << "Total cents:" << no_of_cent << endl;
    cout << "1$: " << dollar << endl;
    cout << "1q: " << quid << endl;
    cout << "1d: " << dime << endl;
    cout << "1n: " << nikkl << endl;
    cout << "1p: " << penny << endl;

    return 0;
}