//const word for pointers
//3-ways usecase


#include <iostream>
using namespace std;

int main() {
    //1. pointers to constants
    int a{10};
    int b{20};
    const int  *ptr{&a}; //pointer data cant be changed and is constant
    //*ptr=7; //error
    ptr=&b;
    cout << *ptr<<endl;

    //2. constant pointers

    int a1{10};
    int b2{20};
    int *const ptr_{&a1}; // data can be changed but address pointed towards cant be changed
    *ptr_=7;
    // ptr_=&b; //error 

    //3. constant pointers to constant
    int a3{10};
    int b4{20};
    const int *const ptr__{&a1}; //both the address and values cant be changed 
    // *ptr__=7; //error
    // ptr__=&b; //error 

    return 0;
}