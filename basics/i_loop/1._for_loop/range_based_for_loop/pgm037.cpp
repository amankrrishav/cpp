//range based for loop examples


#include<iostream>
#include<vector>


using namespace std;
int main(){
    //vector use for range_base_loops

    vector<double> temps {37.01,98.7,45.0};
    double avg_temps{};
    double running_sum{};

    for(auto temp: temps)
    running_sum=running_sum+temp;

    avg_temps=running_sum/temps.size();

    cout<<"Average temperature is: "<< avg_temps<<endl;

    cout<<"------------------------"<<endl;

    //initiliser list
    //finding avg speed of man

    vector<double> Speed {};

    double avg_speed{};
    double total_speed{};

    int size{};

    for(auto speed : {20.01, 100.5, 45.9}) //initialised the speeeds directly in for()

    total_speed=total_speed+speed;
    ++size; //speeed was initially initialised to zero so we have to --> caculate the size of vector(Speed)

    avg_speed=total_speed/size;

    cout<<"Avg speed for man: "<<avg_speed<<endl;

    cout<<"------------------------"<<endl;


    






    return 0;
}