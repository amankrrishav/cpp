//list (Doubly linked list)--> which cant be accessed randomly
//list is kind of vector where we can put  elements from back and front both sides
//use of various func included
#include <iostream>
#include <list>
using namespace std;

int main() {
    list <int> l;
    //1 push 
    l.push_back(1); //pushed to back
    l.push_back(2);
    l.push_front(3); //pushed to front 
    l.push_front(4);

    for(auto list_: l){
        cout << list_ << " "; //4 3 1 2
    }cout << endl;

    //2 emplace
    l.emplace_back(5); //pushed to back
    l.emplace_back(6);
    l.emplace_front(7); //pushed to front
    l.emplace_front(8);

    for(auto list_: l){
        cout << list_ << " "; //8 7 4 3 1 2 5 6
    }cout << endl;

    //3 pop
    l.pop_back();
    l.pop_back();
    l.pop_front();
    l.pop_front();

    for(auto list_: l){
        cout << list_ << " "; //4 3 1 2
    }cout << endl; 
    return 0;
}