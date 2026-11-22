// do while loop basic example
// menu selection that repeats until user enters 'q' or 'Q'

#include <iostream>
using namespace std;

int main() {
    char choice {};

    do {
        cout << "\nMenu Options:\n";
        cout << "1. Say Hello\n";
        cout << "2. Print Number\n";
        cout << "Q. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            cout << "Hello there!" << endl;
        } else if (choice == '2') {
            cout << "Number: 42" << endl;
        } else if (choice == 'q' || choice == 'Q') {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Unknown choice, please try again." << endl;
        }
    } while (choice != 'q' && choice != 'Q');

    return 0;
}
