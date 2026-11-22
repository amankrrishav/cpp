//template function

#include <iostream>
#include<string>
//using namespace std; //will cause error as ambiguity occurs
//1
template<typename T>
T min(T a, T b){
    return (a<b)? a:b;
}
//2
template<typename T1 , typename T2>
void func(T1 a, T2 b){
    std::cout<< "a: " << a << " " << "b: "<< b << std::endl;
}
//3
struct Person{
    std:: string name;
    int age;
    bool operator<(const Person &rhs)const {
        return this->age < rhs.age;
    }
};
std::ostream &operator <<(std::ostream &os, const Person &p){
    return os<< p.name;
}
//4
template <typename T>
void my_swap(T &a, T &b){
    T temp = a;
    a=b;
    b=temp;
}
int main() {
    //1
    std::cout << min<int>(2,3)<<std::endl;
    std::cout << min(2,3)<<std::endl;
    std::cout << min(12.01 , 455.5) << std::endl;
    //2
    func(12.99, 253553);
    func<int,bool>(1,false);
    func<float,long>(1222.45,8999999999999999); 
    //3
    Person p1;
    Person p2;
    p1={"curly",1};
    p2={"moe",30};
    //2
    func(p1,p2);
    //3
    Person p3 =min(p1,p2);
    std::cout << p3.name << " is younger."<<std::endl;
    //4
    int x{100};
    int y{200};
    std::cout << x << "," << y << std::endl;
    my_swap(x,y);
    std::cout<<x << ","<<y << std::endl;
    return 0;
}