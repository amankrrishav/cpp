#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    // Pointer size demo
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "\nSize of p1 is: " << sizeof p1 << endl;
    cout << "Size of p2 is: " << sizeof p2 << endl;
    cout << "Size of p3 is: " << sizeof p3 << endl;
    cout << "Size of p4 is: " << sizeof p4 << endl;
    cout << "Size of p5 is: " << sizeof p5 << endl;


    // Actual variables
    int score {10};
    double high_temp {100.7};

    // Pointer declaration
    int *score_ptr {nullptr};

    // Assign address of score to pointer
    score_ptr = &score;

    // Outputs
    cout << "\nValue of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl;

    // This would cause a compiler error (type mismatch)
    // score_ptr = &high_temp;

    return 0;
}