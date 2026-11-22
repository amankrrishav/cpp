// do while loop - calculate running total
// stops when user enters 0

#include <iostream>
using namespace std;

int main() {
    int value {};
    int total {0};

    do {
        cout << "Enter a number to add (0 to stop): ";
        cin >> value;
        total += value;
    } while (value != 0);

    cout << "Final Total: " << total << endl;

    return 0;
}
