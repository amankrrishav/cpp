//pointer arithematic
#include <ios>
#include <iostream>
using namespace std;

int main() {
    int arr[]{1,2,3,4,-1};
    int *arr_p{arr};
    while(*arr_p != -1){
        cout<< *arr_p<<endl; //dereferenced 
        arr_p++;             //increment 
    }

    cout<<"\n--------"<<endl;
    arr_p=arr;
    while(*arr_p!=-1){
        cout<< *arr_p++<<endl; //derefrenced & increment both
    }

    cout<<"\n--------"<<endl;
    string s1 {"aman"};
    string s2 {"aman"};
    string s3 {"rishav"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<< boolalpha<<endl;
    cout << p1 << "=="<< p2 << (p1==p2)<<endl; //compares address
    cout << p1 << "==" << p3 << (p1==p3)<<endl; //compares address

    cout<< *p1 << "==" << *p2 << (*p1 == *p2)<<endl; // compares vals
    cout << *p1 << "==" << *p3 << (*p1==*p3)<<endl; // omapres vals

    p3=&s3;  //assigned to address of s3 = rishav
    cout << *p1 << "==" << *p3 << (*p1==*p3)<<endl; // compares new adresses value

    cout<<"\n--------"<<endl;
    return 0;
}