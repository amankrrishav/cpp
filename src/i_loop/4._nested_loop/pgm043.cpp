//print table of 1 to 10 each upto 10 .

#include <iostream>
using namespace std;

int main(){
    int i;
    int j;

    for (i=1;i<=10; i++){
        for(j=1;j<=10;j++){
            cout<< i << " * " << j << " = " << i*j <<endl;
        }
        cout << "---------------------"<<endl;
    }
    cout << endl;
}

// this is most basic and classic example of nested loops 
// inner loop always loops faster than outer loop
// no brainer