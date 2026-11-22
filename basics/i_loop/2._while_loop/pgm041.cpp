// while loop for input validation
// keep asking user until number is between 1 and 10

#include <iostream>
using namespace std;

int main() {
    int number {};

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    while (number < 1 || number > 10) {
        cout << "Invalid input! Try again: ";
        cin >> number;
    }

    cout << "Valid number entered: " << number << endl;

    return 0;
}
