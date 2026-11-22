//pointer
//basic example

#include <iostream>
using namespace std;

int main() {
    int *x;
    cout<<"ptr is : " << x << endl; //garbage val
    cout<<"ptr size is: "<< sizeof x<<endl; // 8
    cout<<"ptr address is: "<< &x << endl;  // address rn - same as val
    x=nullptr;
    cout<<"now the ptr is: "<<x<<endl;  // 0

    /*

    int a{10};
    double b{11.11};

    int *a_ptr{nullptr};
    a_ptr= &a;
    a_ptr= &b; //incompatible because types doesnt match

    */
    
    return 0;
}