//pgm to use multiple def ARGS
/* 
3 para(m) - price , tax and discount
to calculate = calc_bill()
logic = final_amt=price+(price*tax)+discount
*/

#include<iostream>
using namespace std;

double calc_bill(double price, double tax=6,double discount=10.0);

int main(){
    double bill{};
    
    bill=calc_bill(100);
    cout<<"bill (only price): "<<bill<<endl;
    
    bill=calc_bill(100,8);
    cout<<"bill (price and tax): "<<bill<<endl;

    bill=calc_bill(100, 30,20);
    cout<<"bill (price , tax and discount): "<<bill<<endl;

    return 0;

}
double calc_bill(double price, double tax, double discount){
    return price +(price*tax/100)- discount;
}

