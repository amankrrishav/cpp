// recursion 
// imp note - use when its makes sense 

#include <iostream>
using namespace std;

//example - fibonaaci

unsigned long long fib(unsigned long long n);

int main(){
    cout<<fib(10)<<endl;  //3628800
    cout<<fib(20)<<endl;  //2432902008176640000
    cout<<fib(30)<<endl;  //9682165104862298112 
    return 0;
}

unsigned long long fib(unsigned long long n){
    if(n==0 || n==1)
    return n;
return n* fib(n-1); 
}