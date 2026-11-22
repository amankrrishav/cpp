//template store single values and prints them when func is called
//for all types default teplate works
//except string -> it has seperate template
//default template para'ms
//template will work fine until no para m is given it will default to (int type)
#include <iostream>
using namespace std;

template<typename T =int>
class Box{
    T val;
    
    public:
    Box(T b){
        val=b;
    }
    void box_val(){
        cout << val << endl;
    }
};
template<>
class Box<string>{
    string val1;
    public:
    Box(string c){
        val1=c;
    }
    void box_val1(){
        cout << "Text: " << val1 << endl;
    }
};

int main() {
     
    Box<string> obj_v("aman");
    obj_v.box_val1();
    Box<int> obj_(1);
    obj_.box_val();
    Box<> obj__(5); // automatically int is set as default 
    obj__.box_val();
    return 0;
}