//template + inheritance
#include <iostream>
using namespace std;
template <typename T=string>
class Animal{
    //attribute
    public:
    T name;
     //constructor
    Animal(T a){
        name =a;
    }
    //method
    void speak(){
        cout << "Animal: " << name << endl;
    }
};
class Dog:public Animal<string>{
    
    public:
    Dog(string a): Animal<string>(a){
        cout << "Dog: " << name << endl;
    }
};
int main() {
    Animal<> obj1("TIM");
    obj1.speak();
    Dog obj2("COOK");
    return 0;
}