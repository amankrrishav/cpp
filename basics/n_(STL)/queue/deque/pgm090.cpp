//deque(Dynamic array) --> can be accessed randomly 

#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.emplace_back(3);
    d.emplace_front(4);

    for(auto deque_: d){
        cout << deque_<< " ";
    }cout <<endl;

    cout << d[1]; //randomly acccessed at index 1
    cout << endl;

    d.pop_back();
    d.pop_front();
    
    for(auto deque_: d){
        cout << deque_<< " ";
    }cout <<endl;

    return 0;
}