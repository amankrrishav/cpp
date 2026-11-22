//multimap
#include <iostream>
#include<map>

using namespace std;

int main() {
    multimap<string,int> mm;
    // **no use of -> []
    mm.insert({"key1",10});
    mm.insert({"key2",20});
    mm.emplace("key3",5);
    mm.emplace("key4",100);
    //key1 is used twice
    mm.insert({"key1",20});

    cout<< "--- multimap ---"<<endl;
    for(auto &[key,value]:mm){
        cout << key << " --> " << value << endl;
    }
    // -- erase method ---
    cout << "--- erase ---"<<endl;
    mm.erase("key2");
    cout << mm.count("key2"); // 0
    cout << endl;

    // -- find method -----
    cout << "--- find ---"<<endl;
    auto key1=mm.find("key1");
    if(key1 !=mm.end()){
        cout << "key1 found: "<<endl;
        while(key1!= mm.end() && key1->first=="key1"){
            cout << key1->first << "->" << key1->second << endl;
            key1++;
        }
    }else{
        cout << "not found..."<<endl;
    }

    // -- size method ---
    cout<<"--- size ---"<<endl;
    cout <<"size: "<< mm.size();
    cout<< endl;

    cout << "--- new multimap ---"<<endl;
    //new mm using swap
    multimap<string,int> new_mm;
    new_mm.swap(mm);

    for(auto &[key,value]: new_mm){ // & reference op matters in large maps
        cout << key << " -> " << value << endl;
    }
    return 0;
}