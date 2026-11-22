//pgm to show if a int enetered is greater than equal to target OR less than target.

#include <iostream>

using namespace std;

int main(){

    int num{0};
    const int target{24};

    cout << "Enter any integer of your choice:" << endl;
    cin >> num;

    if(num>= target){
        cout << num << " is greater than equal to " << target << endl;
        int diff{num - target};
        cout << num << " is " << diff << " larger than target." << endl;
    }

    else{
        cout << num << " is smaller than " << target << endl;
        int diff{target-num};
        cout << num<< " is " << diff << " smaller than target." << endl;
    }
    return 0;
}