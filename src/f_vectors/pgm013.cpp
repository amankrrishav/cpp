#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vector1;
    vector <int> vector2;
    
    int add_to_v1 {0};
    cout << "Add a number:" << endl;
    cin >> add_to_v1;
    vector1.push_back(add_to_v1);
    cout << "Add another number:" << endl;
    cin >> add_to_v1;
    vector1.push_back(add_to_v1);

    cout << "\nElements in vector 1:" << vector1.at(0) << " " << vector1.at(1)<< " Using .at method."<<endl;
    cout << "\nElements in vector 1:" << vector1.size() << " Using .size method.\n"<< endl;

    int add_to_v2 {0};
    cout << "Add a number:" << endl;
    cin >> add_to_v2;
    vector2.push_back(add_to_v2);
    cout << "Add another number:" << endl;
    cin >> add_to_v2;
    vector2.push_back(add_to_v2);

    cout << "\nElements in vector 2:" << vector2.at(0) << " " << vector2.at(1)<< " Using .at method."<<endl;
    cout << "\nElements in vector 2:" << vector2.size() << " Using .size method."<< endl;



    vector <vector <int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "\n Elements in 2d vector are:" << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << " Using at method.\n" << endl;
    cout << "\n Elements in 2d vector are:" << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << " Using at method." << endl;

    //i have to change vector 1 at 0 index to 1000! and then display 2d again.
    vector2d.at(0).at(0)=1000;
    cout << "\n Elements in 2d vector are:" << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << " Using at method.\n" << endl;
    cout << "\n Elements in 2d vector are:" << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << " Using at method." << endl;

    cout << "Updated elements in vector1 are:" << vector1.at(0) << " " << vector1.at(1) << endl;
    return 0;
}