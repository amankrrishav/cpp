/*Write a function void updateStats(int &highest, int &lowest, int &sum, int a, int b, int c)
It should take 3 numbers a, b, c and:

Store the highest of the three in highest
Store the lowest of the three in lowest
Store the sum of all three in sum

Then in main, call the function and print the results.
Expected output for a=4, b=9, c=2:
Highest: 9
Lowest: 2
Sum: 15
*/

#include<iostream>
using namespace std;

void status(int &sum, int &largest, int &min, int a, int b, int c);

int main(){

    int a{4};
    int b{9};
    int c{2};
    int sum,largest,min;
    status(sum,largest,min,a,b,c);
    cout<<"sum: "<<sum<<endl;
    return 0;
}
void status(int &sum, int &largest, int &min, int a, int b, int c){

   largest=(a>b)? ((a>c)? a:c):((b>c)? b:c);
   cout<<"Largest: "<<largest<<endl;

   min=(a<b)? ((a<c)? a:c):((b<c)? b:c);
   cout<<"Minimum: "<<min<<endl;

    sum=a+b+c;
    
}