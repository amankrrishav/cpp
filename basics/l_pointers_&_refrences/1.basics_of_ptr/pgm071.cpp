//allocate and deallocate memory for type using pointer and pointer methods
//for ARRAY
//dynamic memory

#include <iostream>
using namespace std;

int main() {
    int *array_p{nullptr};

    int size;
    cout<<"ASK SIZE TO USER:";
    cin>> size;

    array_p = new int[size];
    //
 
    //
    delete []array_p;

    return 0;
}