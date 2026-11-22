//looping (for)
//ques A - print 1 - 100 and after every 10th digit line should chnage and space them inbetween 
// use 1> if else method
// use 2> conditional opr

//ques B - FIND THE SUM OF ALL ODD NUMBERS BETWEEN 1-100
//use for loop

#include <iostream>
using namespace std;
int main(){

    //1
    int i{};
    for (i=1;i<=100;i++){
        cout<<i;
        if(i%10==0)
        cout<<endl;
        else
        cout<<" ";
    }

    cout<<"--------------------------------"<<endl;

    //2

    int j{};
    for (j=1;j<=100;++j){
        cout << j;
        (j%5==0)? cout<<endl:cout<<" ";
    }

    cout<<"--------------------------------"<<endl;

    //3

    int N;
    int sum=0;
    
    for(N=1;N<=100;N++){  // this block is a running process 
        if(N%2 !=0)       // if output exp is written here then it will show the ( running output ) not the exact output
        sum=sum+N;        
    }
    cout<< sum << endl;   // write output statement outside for{}block

    cout<<"--------------------------------"<<endl;
    
    return 0;
}