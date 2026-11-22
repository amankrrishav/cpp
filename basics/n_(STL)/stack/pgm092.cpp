//stack
//FIFO RULE
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
    s.emplace(5);
    s.emplace(6);

    cout << s.size() << endl; // 6

    //Swap BEFORE draining s
    stack<int> new_s;
    new_s.swap(s); // s is now empty, new_s has all elements

    //Drain the original stack (now empty, skipped)
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    //use new_s.top() and new_s.pop()
    while (!new_s.empty()) {
        cout << new_s.top() << " ";
        new_s.pop();           // prevents infinite loop
    }
    cout << endl;

    cout << new_s.size() << endl; // 0, fully drained

    return 0;
}