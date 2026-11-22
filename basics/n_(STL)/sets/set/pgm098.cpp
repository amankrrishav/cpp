//set
#include <iostream>
#include<set>

using namespace std;
/*
Create a set that stores unique City Names

1. INSERT 4 cities using insert()
2. Try to INSERT a duplicate city — observe what happens
3. EMPLACE 1 city using emplace()
4. FIND a city that EXISTS and one that DOESN'T
5. ERASE 1 city
6. PRINT size before and after erase
7. ITERATE and print all cities
8. COUNT method — check if a city exists
*/
int main() {
    set<string> city;
    city.insert("Blr"); //no parentheseis needed for set
    city.insert("Pat");
    city.insert("Del");
    city.insert("Bom");
    //duplicate city
    city.insert("Blr"); //will not be inserted // ignored
    //emplace
    city.emplace("Ddn");
    //Find city -> existing
    auto f_c=city.find("Pat");
    if(f_c !=city.end()){
        cout << "Found: "<< *f_c <<endl;
    }else{
        cout<< "Not found!"<<endl;
    }
    //find 2 non -existing
    auto f_c2 = city.find("Gaya");
    if(f_c2 !=city.end()){
        cout << *f_c2 << endl;
    }else{
        cout << "Not found!!"<<endl;
    }
    //size before
    cout << "size before: "<<city.size()<< endl;
    //erase Blr
    city.erase("Blr");
    //size after
    cout << "size after: "<<city.size() << endl;
    //iterate all print all
    cout << "Cities : "<<endl; 
    for(auto& all: city){
        cout << all << " ";
    }cout <<endl;
    //count method
    if(city.count("Blr")){
        cout << "Exists." << endl;
    }else{
        cout << "Blr doesnt exist."<<endl;
    }
    return 0;
}