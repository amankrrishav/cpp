//queue
// push from back and pop from front

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
    s.emplace(5);
    s.emplace(6);

    cout <<"size of original : "<< s.size() << endl; // 6

    //Swap BEFORE draining s
    queue<int> new_s;
    new_s.swap(s); // s is now empty, new_s has all elements

    //Drain the original stack (now empty, skipped)
    while (!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }
    cout << endl;

    //use new_s.top() and new_s.pop()
    cout << "Elements in new queue: ";
    while (!new_s.empty()) {
        cout << new_s.front() << " "; 
        new_s.pop();           // prevents infinite loop
    }
    cout << endl;

    cout << "size of new after pop(): "<<new_s.size() << endl; // 0, fully drained

    return 0;
}