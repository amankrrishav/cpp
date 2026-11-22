//switch statement

#include <iostream>
using namespace std;

int main(){

    char grade_letter;

    cout << "PLease enter your grade." << endl;
    cin >> grade_letter;

    switch(grade_letter){

        case 'a': //in case user enter either small
        case 'A': // in case user enter large cap
        cout << "You have excelent performance in exam."<< endl;
        break;

        case 'b': //similarly
        case 'B': //similarly
        cout << "You are above avg students.good job" << endl;
        break;

        case 'c': //similarly
        case 'C': //similarly
        cout << "You have to perform better next time." << endl;
        break;

        case 'd': //similarly
        case 'D': //similarly
        cout << "You have performed below avg.study harder."<< endl;
        break;

        case 'f':
        case 'F':

        {
            char confirm;
            cout << "Are u sure Y/N: "<< endl;
            cin >> confirm;
            if(confirm=='y'|| confirm=='Y') // == is used to compare the users input
            cout << "You have failed." << endl;
            else if(confirm=='n'|| confirm=='N')
            cout << "PLease re-check your grade and try again."<< endl;
            else
            cout << "Not a valid input."<<endl;
            break;

        }

        default:
        cout << "PLease enter a valid Grade input."<< endl; // def statement only executes if all cases input fails 
    }
    return 0;
}