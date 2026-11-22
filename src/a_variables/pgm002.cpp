#include <iostream>
using namespace std;

int main() {
    // Variables and basic data types
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    string name = "John";
    
    // Output
    cout << "Hello, World!" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    
    // Basic arithmetic
    int a = 10, b = 5;
    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    
    // Conditional statement
    cout << "\nConditional Check:" << endl;
    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Minor" << endl;
    }
    
    // Loop
    cout << "\nLoop - Print 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}