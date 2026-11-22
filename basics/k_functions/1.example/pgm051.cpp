// find the MAX_RAND value of my device

#include <iostream>
#include<cmath>

using namespace std;

int main(){
    
    cout<< "The RAND_MAX of my mac m4 is:" << RAND_MAX <<endl; //2147483647
    srand(time(nullptr)); // can use this and also cannot for this generation value 

    return 0;
}