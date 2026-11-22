//for loop
//ques 1 - print sum of N numbers
// input - N 
//OUTPUT - sum of all N

#include <iostream>
using namespace std;
int main(){

    /*int N;
    int sum=0;
    int i;

    cout<< "**Welcome to N sum calculator**"<<endl;
    cout<<"Enter any Nth number you want to calculate their sum: ";
    cin>> N;

    for(i=0;i<=N;i++){
    sum=sum+i;
    }
    cout<< "Sum of "<<N<< " numbers: "<< sum<<endl;

    cout<<"---------------------------------------------------------"<<endl;
    

    //ques -2 
    // sum of N even integers
    int n;
    int sum_n=0;

    cout << "Welcome to Nth even nums only sum calculator"<<endl;
    cout<<"PLease enter any Nth number: ";
    cin>> n;

    int j;

    for(j=0;j<=n;j++){
        if(j%2==0)
        sum_n+=j;
    }
    cout<<"The sum of all even numbers in "<< n << " numbers: "<<sum_n<<endl;

    cout<<"---------------------------------------------------------"<<endl;
    */


    //ques -3
    //find even digits inside a number 
    //sum of those even digits
    int NUM;
    int sum_NUM=0;

    cout<<"**Welcome to even digits inside a number calculator**"<<endl;
    cout<<"Please enter a number of your choice: ";
    cin>>NUM;

    

    for(;NUM>0;NUM/=10){
        int digit=(NUM%10);
        if(digit%2==0)
        sum_NUM+=digit;
    }
    cout<<"The sum of even digits is: "<<sum_NUM<<endl;

    


return 0;
}