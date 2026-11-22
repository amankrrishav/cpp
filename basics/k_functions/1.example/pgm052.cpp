//pgm to generate random numbers from 0-20
//at each exe numbers should change values

#include <iostream>
#include<cstdlib> //for rand()
#include<ctime> //for time()

using namespace std;

int main(){

    int random_number{};
    size_t count{5}; //5 numbers from min-max(inclusive)
    int min{10};
    int max{20};

    cout<< "The RAND_MAX of my mac m4 is:" << RAND_MAX <<endl; //2147483647
    srand(time(nullptr)); //seeding the random num generator + calling time func -->passing nullpointer(which is 0)

    int i;
    for(size_t i=1;i<=count;i++){               //i is looped 5 times so that 5 random num are generated
        if(min==1){
            random_number=rand() % max + min;//this works when min ==1
            cout<<random_number<<endl;
        }else if(min!=1){
            random_number=rand() %(max-min+1) +min; //this is actual fomula for random number
            cout<<random_number<<endl;
        }else{     
            cout<<"THere's some error pgm er didnt thought of. "<<endl; //just a default working-like sentence if anything 
            cout<<"---PLease try again---"<<endl;                       //doesnt work out in program 
        }
//pgm consisting of control flow sentences 
//consists use of rand() and srand() for seeding for generator
    }
    return 0;
}