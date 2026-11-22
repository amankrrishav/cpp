//map only
#include <ios>
#include <iostream>
#include<map> //includes multimap
using namespace std;

int main() {

    map<string, int> m;
    // ── INSERT (first 3) ──────────────────────
    m.insert({"Mobile",   100});
    m.insert({"TV",        50});
    m.insert({"Headphone", 10});
    // ── EMPLACE (last 2) ─────────────────────
    m.emplace("Laptop", 150);
    m.emplace("USB",     80);

    // ── UPDATE any 2 ─────────────────────────
    m["TV"]     = 75;     // was 50  → now 75
    m["Laptop"] = 200;    // was 150 → now 200

    // ── SORTED ITERATION ─────────────────────
    cout << "---- Sorted Map ----" << "\n";
    for (auto [key, val] : m)
        cout << key << " → " << val << "\n";

    // ── COUNT METHOD ─────────────────────────
    cout << "\n---- Count ----" << "\n";
    cout << "TV exists? " << m.count("TV")<< "\n"; // 1 = yes
    cout << "Keyboard exists? " << m.count("Keyboard") << "\n"; // 0 = no
    cout << "Refridgerator exists? " << m["Refridgerator"] << "\n";
    

    // -- erase method ----
    cout << "\n---- Erase ----" << "\n";
    m.erase("TV");
    cout << "TV exists? " << m.count("TV") << "\n"; // 1 = yes 0=no

    // -- find method ---
    cout << "\n---- Find ----" << "\n";
    auto tv = m.find("TV"); //.find returns iterator
    if(tv != m.end()){
        cout << "found tv.";
        cout << tv->first<<endl;
        cout << tv->second<<endl;
    }else{
        cout << "tv not found!"<<endl;
    }

    // -- size method --
    cout << "\n---- Size ----" << "\n";
    cout << m.size(); //5-1=4
    cout<<endl;

    // --empty method ---
    cout << boolalpha;
    cout << "Empty ? : "<< m.empty(); //false
    cout <<endl;
    return 0;
}