//passing a vector of string

#include <iostream>
#include<vector>
#include<string>
using namespace std;

void pass_vector(const vector<string> *const str);
void display(int *array, int sentinel);

int main() {
    vector<string> name;
    name = {"aman", "kumar", "rishav"};
    pass_vector(&name);
    cout<<"\n---------------"<<endl;
    int scores_A[]{1,2,3,4,-1}; //-1 IS SENTINEL
    display(scores_A,-1);


    return 0;
}
void pass_vector(const vector<string> *const str){ // used const twice for making the func more safer 
    //*str=7; //error // cant change adress
    for(auto string: *str){
        cout<< string << " ";
        //str=nullptr;  //error //cant change value
    }
}

void display(int *array, int sentinel){  //pass by ref
        while(*array !=sentinel){
            cout<< *array++ << " "<<endl;
        }
}