//pointer - pass to function

#include <iostream>
using namespace std;


    void double_data(int *pointer);

    int main(){
        int a{10}; //created an integer 
        int *pointer; //created pointer
        pointer=&a; //assigned pointer to address of int a
        double_data(pointer); //passing the address of pointer
        cout<< *pointer<<endl; //result as output 
    return 0;
    }

    void double_data(int *pointer){ //dereference the address 
        *pointer *=2;
    }

    