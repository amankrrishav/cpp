// collatz conjecture sequence generator
// loops until the number reaches 1

#include <iostream>
using namespace std;

int main() {
    long long n {};
    cout << "Enter a positive starting number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number must be positive." << endl;
        return 1;
    }

    int steps = 0;
    cout << "Sequence: " << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " -> " << n;
        steps++;
    }

    cout << "\nReached 1 in " << steps << " steps." << endl;

    return 0;
}
