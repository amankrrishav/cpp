//relation-ship b/w ARRAY && POINTER

#include <iostream>
using namespace std;

int main() {

   // int *pointer_A{nullptr};

    int array []{1,2,3};
    
    int *pointer_A{array};

    cout << pointer_A; //gives address of pointer 
    cout <<"\n" << *pointer_A; //gives value of address of pointer pointing towards // 1st element

    //expression use

    cout << "\n" << *(pointer_A + 1); // *(p + Index) //offset notation
    cout << "\n" << *(pointer_A + 2); // *(p + Index) //offset notation
    return 0;
}