//looping program
/*1. print num from 1-10
*/

#include <iostream>
using namespace std;
int main(){

    int i;
    for(i=1;i<=10;i++)
    cout << i << " ";

    cout<< endl;

    cout << "------" << endl;
    //print from 10 to 1
    int j;
    for(j=10;j>0;j--)
    cout << j << " ";

    //take input num from the user 
    //print the table of num till 10 multiples
    //use only (for) loop for the question

    int N;
    int min;
    min=1;
    int max;
    max=10;

    cout << "Enter any number between " << min << " and " << max <<endl;
    cin >> N;

    for(i=1;i<=10;i++)
    cout << N << " x "  << i << N * i << endl;

return 0;
}