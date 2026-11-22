//calc_simple_int
#include<iostream>
using namespace std;

double calc_s_i(double p,double r,double t);

int main(){
    double p;
    double r;
    double t;
    cout<<"Enter p , r and t seperated by space: ";cin>>p>>r>>t;
    cout<<"Simple interest is: "<<calc_s_i(p,r,t)<<endl;
    return 0;
}
double calc_s_i(double p,double r,double t){
    return (p*r*t)/100;
}