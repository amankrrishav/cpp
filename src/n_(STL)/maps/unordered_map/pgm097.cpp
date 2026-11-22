//unordered_map
//most used in DSA
#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
/*Create an unordered_map that stores Student Name → Marks

1. INSERT 3 students using insert()
2. EMPLACE 2 students using emplace()
3. UPDATE marks of any 2 students
4. FIND a student that EXISTS and one that DOESN'T
5. ERASE 1 student
6. PRINT size before and after erase
7. ITERATE and print all students
*/
int main() {
    unordered_map<string,int> stud;
    //insert,emplace
    stud.insert({"Aman",90});
    stud.insert({"Ali",60});
    stud.insert({"Ayush",88});
    stud.emplace("Ashmit",90);
    stud.emplace("Harsh",50);
    //update
    stud["Aman"]=95;
    stud["Ali"]=33;
    //find
    auto find=stud.find("Aman");
    if(find!=stud.end()){
        cout << "Found"<<endl;
        cout << find->first << " -> " << find->second << endl;
    }else {
        cout << "Not found !!"<<endl;
    }
    // non existing find
    auto find2 = stud.find("John");
    if (find2 != stud.end()) {
    cout << find2->first << " -> " << find2->second << "\n";
    } else {
    cout << "John -> Not found!" << "\n";    // this should run
    }
    //size (before erase)
    cout << "Size before: " << stud.size();
    cout << endl;
    //erase a student
    stud.erase("Ali");
    //size (after erase)
    cout << "Size After: " << stud.size();
    cout << endl;
    //iterate and print all students
    cout << "Students: "<<endl;
    for(auto& [key,value]: stud){
        cout << key << " -> " << value << endl;
    }
    return 0;
}