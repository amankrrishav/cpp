//priority_queue
// top ele= highest p
// bottom ele= lowest p
#include <iostream>
#include<queue>

using namespace std;

int main() {
    priority_queue<int> p;
    p.push(1);
    p.push(10);
    p.emplace(5);
    p.emplace(100); // 100 10 5 1 //highest 1st OR ASCENDING ORDER

    p.size(); //4

    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }cout << endl;

    cout<< "-------------"<<endl;


    //for - reverse priority_queue
    priority_queue<int, vector<int>,greater<int>> pq1;
    pq1.push(1);
    pq1.push(10);
    pq1.emplace(5);
    pq1.emplace(100);

    pq1.size();
    
    while(!pq1.empty()){
        cout << pq1.top() << " ";
        pq1.pop();
    }cout << endl;
    return 0;
}