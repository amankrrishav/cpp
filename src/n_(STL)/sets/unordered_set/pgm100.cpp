#include <iostream>
#include<unordered_set>
using namespace std;
// NO LOWER BOUND /OR / UPPER BOUND IN THIS SET TYPE
//CUZ OF NO SORTED ORDER AND HASH 
int main() {
    unordered_set<int> mi;
    //insert and emplace
    mi.insert({5});
    mi.insert({3});
    mi.emplace(8);
    mi.emplace(3);
    mi.emplace(5);
    mi.emplace(9);
    //silently ignores the non-unique elemnets tried to be inserted or emplace
    // no order of sorting 
    
    //iterate the elements and print
    cout << "Elements are: ";
    for (auto mi_ : mi){   //random manner output 
        cout << mi_ << " ";
    }cout << endl;
    cout << "-----------------------------"<<endl;

    //size before
    cout << mi.size() << endl;
    //erase 1 element
    mi.erase(3);
    //size after
    cout << mi.size()<< endl;

    //find
    int num;
    cout << "Enter the num u want to find: ";
    cin >> num;
    auto find_ele= mi.find(num);
    if(find_ele!=mi.end()){
        cout << "found: " << *find_ele<<endl;
    }else{
        cout << "not found !";
    }cout << endl;

    // Alternative — count() ✅ (simpler for just checking)
if (mi.count(num)) {
    cout << "found: " << num << endl;
} else {
    cout << "not found!" << endl;
}
return 0;
}