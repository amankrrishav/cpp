#include <iostream>
#include<set>
using namespace std;

int main() {
    multiset<int> mi;
    //insert and emplace
    mi.insert({1});
    mi.insert({2});
    mi.emplace(5);
    mi.emplace(4);

    //lower_bound check
    int num;
    cout << "Enter the num to find Lower bound: ";
    cin >> num;
    auto lb_num= mi.lower_bound(num);
    if(lb_num!=mi.end()){
        cout << "lower_bound found: " << *lb_num <<endl;
    }else{
        cout << "not found: "; //derefrencing it here is illegal
    }cout << endl;
    cout << "-----------------------------"<<endl;

    //upper bound 
    int num1;
    cout << "Enter the num to find Upper Bound: ";
    cin>>num1;

    auto ub_num= mi.upper_bound(num1);
    if(ub_num!=mi.end()){
        cout << "Upper bound found: "<< *ub_num << endl;
    }else{
        cout << "Not found "; //derefrencing it here is illegal
    }cout << endl;
    cout << "-----------------------------"<<endl;
    
    //iterate the elements and print
    cout << "Elements are: ";
    for (auto mi_ : mi){   //sorted manner output 
        cout << mi_ << " ";
    }cout << endl;
    cout << "-----------------------------"<<endl;
    return 0;
}