//pair 

#include <iostream>
using namespace std;

int main() {
    pair<int, int> p;
    p={1,2};
    cout << p.first << " " << p.second;
    cout << endl;

    cout << "------" <<endl;

    //pair of pair
    pair<int, pair<string, int>> pair_ed;
    pair_ed={1,{"aman",07}};
    cout << pair_ed.first << endl;
    cout << pair_ed.second.first<<endl;
    cout << pair_ed.second.second <<endl;

    cout << "------"<<endl;

    //vector of pair 
    vector<pair <int , int >> pd;
    pd={{1,2},{2,3},{3,4}};
   
    pd.push_back({4,5}); //has to put inside parenthesis
    pd.emplace_back(5,6); //no need of parenthesis

    for(auto p: pd){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}