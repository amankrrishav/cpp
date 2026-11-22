/*
Question: Function Overloading

👉 Create a function named:calculate_area()

Requirements:
1️⃣ Overload for circle
	•	Takes: radius
	•	Returns: area of circle

⸻
2️⃣ Overload for rectangle
	•	Takes: length, breadth
	•	Returns: area of rectangle

⸻
3️⃣ Overload for triangle
	•	Takes: base, height
	•	Returns: area of triangle

⸻
📌 In main():
	•	Call all 3 versions
	•	Print results clearly

⸻
⚠️ Rules to follow (important)
	•	Same function name
	•	Different parameter list
	•	Return type alone should NOT be different (must change parameters)
*/  
#include<iostream>
using namespace std;

double calc_area(double r);
double calc_area(double l,double breadth);
double calc_area(double base, double h,int); // to differentiate int has been added but wont be passed in return

int main(){
    double area{};

    area=calc_area(5);
    cout<<"circle: "<<area<<endl;

    area=calc_area(3,4);
    cout<<"Rectangle: "<<area<<endl;

    area=calc_area(6,7,0);
    cout<<"Triangle: "<<area<<endl;
    
    return 0;
}

double calc_area(double r){
    return 3.14*r*r;
}
double calc_area(double l,double breadth){
    return l*breadth;
}
double calc_area(double base,double h,int){
    return 0.5*base*h;
}