//this pgm is ex of switch statement using enum
//

#include <iostream>
using namespace std;

int main(){

    enum mood{
        stressed, dizzy, lightheaded
    };

    int choice;

    cout << "Enter (0 = stressed, 1 = dizzy, 2 = lightheaded): ";
    cin >> choice;

    if(choice < 0 || choice > 2){
        cout << "Invalid input!" << endl;
        return 0;
    }

    mood mood_type = static_cast<mood>(choice);

    switch(mood_type){
        case stressed:
            cout << "Meditation will help." << endl;
            break;

        case dizzy:
            cout << "Sit for a while. It will help." << endl;
            break;

        case lightheaded:
            cout << "Drink ORS or see a doctor." << endl;
            break;
    }

    return 0;
}