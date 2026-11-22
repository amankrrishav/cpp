//Scope Rules 
//examples 
//basic

#include<iostream>

using namespace std;

void local_example(int);

void global_example();
int global{300};

void static_local_example();


int main(){
    int num {100}; //local for main()
    int num1 {200}; //local for main()

    cout<< "Local num is: "<< num<< endl;

    {//inner block in main()
        int num {100}; //local to this block
        cout<<"Local num is: "<<num<<" inside this inner block."<<endl;
        cout<<"Inner block in main can see out - num1 is: "<< num1<< endl; //can see outer 
    }

    cout<< "Local num is: "<< num << " in main."<< endl;
    cout<<"----------------------------------------------"<<endl;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////

    local_example(10);
    local_example(20);
    cout<<"----------------------------------------------"<<endl;

    global_example(); //called 1st time //this will perform function upon initialised global val
    global_example(); //called 2nd time //this will perform function upon the 1st time function output(which will ini when output )
    cout<<"----------------------------------------------"<<endl;

    static_local_example();//called 1st time 
    static_local_example();//called 2nd time 
    cout<<"----------------------------------------------"<<endl;




return 0;
}

void local_example(int x){
    int num{1000};
    cout<<"local num is: "<<num<<endl;

    num =x;
    cout<<"Now the num is: "<<num<<endl;
}

void global_example(){ //no need to give a type because it will search auto matically
    cout<<"Global num is: "<< global<< endl;
    global=global+1;
    cout<<"Now the global num is: "<<global<<endl;
}

void static_local_example(){
    static int num{1000};
    cout<<"Local num for static local is: "<<num<<endl;
    num=num+1;
    cout<<"Now the num for static local is: "<<num<<endl;
}
