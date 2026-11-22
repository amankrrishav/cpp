// while loop - sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    int n {};
    cout << "Enter a positive integer: ";
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int last_digit = n % 10;
        sum += last_digit;
        n /= 10;
    }

    cout << "Sum of digits of " << original << " is: " << sum << endl;

    return 0;
}
