//storing an address

#include <iostream>
using namespace std;

int main() {
    double a{101.01};
    double b{1.01};

    double *a2z_ptr;

    a2z_ptr=&a; //points to address of a
    cout<<"val: "<< a<<endl;
    cout<< "size: "<< sizeof a <<endl;
    cout<< "address: "<< &a<<endl;


    a2z_ptr=&b; //points to address of b
    cout<< "val: "<< b<<endl;
    cout<< "size: "<< sizeof b <<endl;
    cout<< "address: "<< &b<<endl;
  
    
    a2z_ptr=nullptr;


    cout<<"val: "<< a << b << endl; //still holds val of a , b


    return 0;
}