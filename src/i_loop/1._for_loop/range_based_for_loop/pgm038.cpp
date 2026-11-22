//range based for loop
//ques - calculate total sum of all marks ;
//       count how many students scored above 75
//       print:
//       find avg marks 
//       num of stu scoring above 75

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> marks {90, 75, 50, 60, 33};

    int total_m = 0;
    int count_above_75 = 0;
    double avg_m;

    for(auto mark : marks){
        total_m += mark;

        if(mark > 75){
            count_above_75++;
        }
    }

    avg_m = static_cast<double>(total_m) / marks.size(); //casted  the total marks into double so that decimal isnt missed in division  

    cout << "Average marks: " << avg_m << endl;
    cout << "Students scoring above 75: " << count_above_75 << endl;

    return 0;
}