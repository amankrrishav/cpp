#include <iostream>
using namespace std;
int main(){
    int len,width,height;
    const int max{10};
    const int t1_t{100};
    const int t2_t{500};
    const double base_cost{2.5};

    cout << "--WELCOME TO PACKAGE COST CALCULATOR--" << endl;
    cout << "Enter the length width and height of your package in inches seperated by space: "; cin >> len >> width >> height;
    if(len > max || width > max || height > max){
        cout << "SORRY! WE CAN'T SHIP YOUR PACKAGE." << endl;
    }else{
        const double surcharge_t1{.1};
        const double surcharge_t2{.25};

        int package_vol;
        package_vol=len*width*height;

        double package_cost;
        package_cost=base_cost;

    
        if(package_vol>t2_t){
        package_cost+=package_cost*surcharge_t2;
        cout << "Adding surcharge for t2" << endl;
        }else if(package_vol>t1_t){
        package_cost+=package_cost*surcharge_t1;
        cout << "Adding surcharge for t1" << endl;
        }
    
        cout << "Total volume for package: " << package_vol << endl;
        cout << "Total cost for package: " << package_cost << endl;
        cout << "------------------------" << endl;

    }
    return 0;
}
