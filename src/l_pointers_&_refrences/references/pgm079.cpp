//basic example of reference

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int xyz{10};
    int &ref{xyz};

    cout << xyz << endl;  //10
    cout << ref << endl;  //10
    cout << &ref << endl; //address 

    ref=20;
    cout << xyz << endl; //20
    cout << ref << endl; //20
    cout << &ref << endl; //address

    cout << "---------"<<endl;

    vector<string> names{"aman", "kumar", "rishav"};
    vector<string> &str{names};
    for(auto strr: names)
    strr="no_change";
    for(auto strr: names)
    cout<< strr << endl; 
    cout << "---------"<<endl;
    for(auto &strr: names)
    strr="changed";
    for(auto &strr : names)
    cout << strr << endl;
    cout << "----------"<<endl;
    for(auto const &strr: names)
    cout<<strr<<endl;
    cout<<endl;
    
    return 0;
}