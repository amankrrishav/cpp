//using pgm053 to visvualise how to call afunc using func prototype

#include<iostream>
using namespace std;
/*
below are function prototypes
*/
void area_circle();
void volume_cylinder();
double calc_area_circ(double radius); 
double calc_vol_cyl(double height,double radius);
/*
compiler doesnt care abt variable name 
*/


const double pi{3.14};

int main(){
    area_circle();
    volume_cylinder();
    return 0;
}


double calc_area_circ(double radius){
    return pi * radius *radius;
}
void area_circle(){
    double radius{};
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"Area of circle given radius: "<<radius<< "is: "<<calc_area_circ(radius)<<endl;
}



double calc_vol_cyl(double height,double radius){
    return calc_area_circ(radius)*height;
}
void volume_cylinder(){
    double height{};
    double radius{};
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Enter the radius and height of the cylinder(seperated by space): ";
    cin>>radius>>height;
    cout<<"Volume of cylinder given radius: "<<radius<<" and height: "<<height<<" is: "<<calc_vol_cyl(radius,height)<<endl;

}