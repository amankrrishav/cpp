#include<iostream>
using namespace std;

int main(){
    
    int room_length {0};
    int room_width {0};

    cout<< "Enter the room length: ";
    cin>> room_length;

    cout<< "Enter the room width: ";
    cin>> room_width;   


    cout << "The area of the room is: " << room_length * room_width << " square feet" << endl;

    return 0;
}