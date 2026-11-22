//pass by reference 
//
//take vector example - pass by value
#include <iostream>
#include <vector>
using namespace std;

void mystery(int &a, int &b); //prototype 1

void print (vector<int> v); //prototype 2 

int main(){     //main func which will execute in the pgm
int x{1000};
int y {20};
mystery(x,y);
cout<<"The changed value after calling func: "<<x << " "<<y<<endl;

vector<int> data {1,2,3,4,5};
print (data);


return 0;
}

void  mystery(int &a, int &b){ //definition use for reference variables
    int temp=a; //using temp value for change 
    a=b;
    b=temp;
}


void print(vector<int> v){  //this func will copy original vector and paste into the original vector
    for(auto num: v)       
    cout<<num<<endl;        
}