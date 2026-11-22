//vector 

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec={1,2,3,4,5};

    vec.push_back(10);
    vec.pop_back();

    for(auto vector : vec){  //simple vector print function using for()
        cout << vector << " ";
    }cout << endl;

    //forward iterator 
    vector<int>::iterator it; //instead of this line use auto keyword
    for(it=vec.begin();it!=vec.end();it++){
        cout << *it << " ";
    
    }cout<<endl;

    for(auto it=vec.begin();it!=vec.end();it++){ 
        cout << *it<<" ";
    
    }cout<<endl;

    //backward iterator
    vector<int>:: reverse_iterator it1; //instead use auto keyword
    for(it1 =vec.rbegin();it1!=vec.rend();it1++){
        cout << *it1<< " ";
    }cout<<endl;

    for(auto it1=vec.rbegin();it1!=vec.rend();it1++){
        cout << *it1 <<" ";
    }cout << endl;
    return 0;
}