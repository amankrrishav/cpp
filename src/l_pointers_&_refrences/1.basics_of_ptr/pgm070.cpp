//dereferencing pointer
//use of asterik OR *
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a{10};
    double b{100.01};

    int *ptr_a{&a}; 
    double *ptr_b{&b};

    cout << *ptr_a<<endl; //val of a
    cout << *ptr_b<<endl; //val of b

    *ptr_a=20;
    cout<< "Changed val of a: " << *ptr_a<< endl;
    *ptr_b=1000.00001;
    cout<< "Changed val of b:" << *ptr_b <<endl;

    vector<string> names{"aman", "kumar", "rishav"};
    vector<string> *name_ptr{nullptr};
    name_ptr = &names;

    cout<< "MY NAME: "<<endl;
    cout<< "first name: "<< (*name_ptr).at(0)<<endl;
    cout<< "full name: ";
    for(auto name: *name_ptr){
        cout << name << " ";
    }

    return 0;
}