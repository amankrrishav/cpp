//recursion to find factorial

/*idea - base case if  n = 0 or n= 1 ; return n 
return n*(n-1);
*/

#include<iostream>
using namespace std;

unsigned long long  facto(unsigned long long n);

int main(){
    cout<< facto(10)<<endl;
    cout<< facto(20)<<endl;
    cout<< facto(0)<<endl;
    return 0;
}

unsigned long long facto(unsigned long long n){
    if(n==0 || n ==1)
    return 1;
return n*facto(n-1);
}