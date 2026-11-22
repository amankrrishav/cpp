/*
not !
and &&
or ||
*/

#include <iostream>
using namespace std;
int main(){

    // example for bound checking between 2 constants
    int num{};
    const int lower{7};
    const int upper{70};

    cout << boolalpha;

    cout << "Enter any number between " << lower << " and " << upper << endl;
    cin >> num;
    bool within_bounds{false};
    within_bounds=(num > lower && num < upper);
    cout << num  << " is between" << lower << " and " << upper << ":" << within_bounds << endl;

    // determine if u need to wear a coat based on temp and wind speed 

    
    double temperature{};
    int wind_speed{};

    //cout << "\nLets determine if u need to wear coat today outside." << endl;
    //cout << "----------------------------------------------------" << endl;
    //cout << "Enter the current temperature outside:" << endl;
    //cin >> temperature;
    //cout << "Enter the wind_speed outside:" << endl;
    //cin >> wind_speed;
    bool wear_coat{false};
    //wear_coat= (temperature <=20 && wind_speed >=40 || temperature <=15);
    //cout << "As the temperature is: " << temperature << "and wind speed: " << wind_speed << endl;
    //cout << "\n Upon my calculations wearing:" << wear_coat << endl;

    // ^
    // | 
    // hardcoded 

    //other way (try to build like this for every code)
    // |
    // V
    const double temp_wear_coat{25};
    const int wind_speed_wear_coat{45};
    cout << "\nLets determine if u need to wear coat today outside." << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Enter the current temperature outside:" << endl;
    cin >> temperature;
    cout << "Enter the wind_speed outside:" << endl;
    cin >> wind_speed;
    //when temp is low and wind is high
    wear_coat=(temperature<temp_wear_coat && wind_speed>wind_speed_wear_coat );
    //when temp is very low or wind is very high (either)
    wear_coat=(temperature<temp_wear_coat || wind_speed>wind_speed_wear_coat);
    cout << "As per my Algo Today wear coat:" << wear_coat << endl;

    //both ways are logically correct
    return 0;
}