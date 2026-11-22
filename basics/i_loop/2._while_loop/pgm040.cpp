// basic while loop examples
// 1. counting from 1 to 5
// 2. countdown from 5 to 1

#include <iostream>
using namespace std;

int main() {
    int num {1};

    while (num <= 5) {
        cout << num << " ";
        num++;
    }
    cout << endl;

    cout << "--------------------" << endl;

    int count {5};
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "\nBlastoff!" << endl;

    return 0;
}
