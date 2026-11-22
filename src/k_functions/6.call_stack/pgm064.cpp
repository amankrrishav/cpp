//example of 
//how functions call work in memory

#include<iostream>
using namespace std;

void func_2(int &x, int y, int z){ // &x -alias of result from func_1 , y copyies val of a , z copyies val of b.
    x=x+y+z;
}

int func_1(int a, int b){ // ( a copyies val of i, b copies val of j ) - from main()
    int result{};
    result=a*b;
    func_2(result,a,b); //calls func_2 which has no return type
    return result;
}

int main(){
    int i{10}; 
    int j{20};
    int k{};

    k=func_1(i,j);  //calls func_1
    cout<<k<<endl;       //display output after func 1 and func 2 both are used and poped out of memory and only main left in stack
    return 0;
}