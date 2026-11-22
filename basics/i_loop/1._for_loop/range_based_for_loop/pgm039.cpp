//range based for loop
// ques 2
/*Task:
	1.	Use a range-based for loop to:
	•	Convert each temperature to Fahrenheit
	•	(Hint: modify the original vector itself 👀)
	2.	Then use another range-based loop to:
	•	Find the highest temperature
	•	Count how many temperatures are above 100°F
    */

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<double> celcius {100, 110, 90, 80, 50};

    // celcius --> faren
    for (auto &temp : celcius) {   //&x doesnt copy from original it changes the values and saves in original only 
        temp = (temp * 9.0/5) + 32;
    }

    //max and count >100
    double max_temp = celcius[0];
    int count = 0;

    for (auto temp : celcius) {
        if (temp > max_temp) {
            max_temp = temp;
        }

        if (temp > 100) {
            count++;
        }
    }

    cout << "Max temp: " << max_temp << endl;
    cout << "Above 100: " << count << endl;

    return 0;
}