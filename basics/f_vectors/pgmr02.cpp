// r02 pgm  for vectors 
// ques -  make empty vector , add 10 and 20 using push back method , then access them using at method and size method 
// at method - will show the elements inside 
// size method - will show no of elements


#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vec_1;
    vector <int> vec_2;

    vec_1.push_back(10);
    vec_1.push_back(20);

    cout << "Element at 0 index: " << vec_1.at(0) << endl; //using at method
    cout << "Element at 1 index: " << vec_1.at(1) << endl; //using at method

    cout << "--------------------------------------------" << endl;

    cout << "No of elements in this vector: " << vec_1.size() << endl; //using size method
   
    vec_2.push_back(100);
    vec_2.push_back(200);


    cout << "Elements in vector 2 are: " << vec_2.at(0) << " and " << vec_2.at(1) << endl; //using At method 
    cout << "--------------------------------------------" << endl;


    vector <vector <int>> vec_2d;
    vec_2d.push_back(vec_1);
    vec_2d.push_back(vec_2);

    cout << "Elements in 0th index in 2d vector are: " << vec_2d.at(0).at(0) <<" "<< vec_2d.at(0).at(1) << endl; //using at method
    cout << "Elements in 1st index in 2d vector are: " << vec_2d.at(1).at(0) <<" "<< vec_2d.at(1).at(1) << endl; //using at method

    cout << "--------------------------------------------" << endl;

    vec_1.at(0)=1000;
    cout << "Changed the vector value at index 0 to 1000." << endl;
    cout << "Now the updated output is below." << endl;
    cout << "Elements in 0th index in 2d vector are: " << vec_2d.at(0).at(0) <<" "<< vec_2d.at(0).at(1) << endl; //using at method


    cout << "--------------------------------------------" << endl;

    cout << "Elements in vector 1: " << vec_1.at(0) << " and " << vec_1.at(1) << endl; //using At method


    return 0;

}