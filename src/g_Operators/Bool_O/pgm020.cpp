/*
a sample pgm about bool operators 
*/

#include <iostream>

using namespace std;

int main(){

    bool result_equal{false};
    bool result_not_equal{false};

    cout << boolalpha;

    int num1,num2;

    cout << "Enter two integers with space:" <<endl;
    cin >> num1 >> num2;

    result_equal = (num1==num2);
    result_not_equal = (num1!=num2);
    
    cout << "Entered integers results for (result_equal):" << result_equal << endl;
    cout << "Entered integers results for (result not equal ):" <<result_not_equal << endl;

    //similarly we can apply this for char , double , int and double(mix mode comparison - 2 diff types so int will be promoted then comparison happens - auto by compiler ) ,etc.
    return 0;
}