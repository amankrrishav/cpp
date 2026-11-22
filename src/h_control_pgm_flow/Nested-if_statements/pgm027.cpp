#include<iostream>

using namespace std;

int main(){
    int len,wth,hth;
    const double base_cost{2.5};

    cout << "Enter the length breadth and height of package in inches (seperated by space):" << endl;
    cin >> len >> wth >> hth;

    if(len<=10 && wth<=10 && hth<=10){

        int vol;
        vol=len*wth*hth;

        if(vol <=100)
        cout << "Total cost: " << base_cost << endl;
        else if(vol>100 && vol<=500)
        cout << "Total cost: " << base_cost+(base_cost*.1) << endl;
        else if(vol>500)
        cout << "Total cost: " << base_cost+(base_cost*.25) << endl;
    }else{
        cout << "WE CAN'T SHIP YOUR PACKAGE." << endl;

    }
    return 0;
}