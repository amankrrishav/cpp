#include <iostream>

using namespace std;

int main(){
    int score{0};
    const int max_score{100};

    cout << "Enter your score:" << endl;
    cin >> score;
    if(score>90 && score<=max_score){
        if(score>95 && score<=max_score)
        cout << "A+" << endl;
        else{
            cout << "A" << endl;
        }
    }else{
        cout << "Sorry, No A" << endl;
    }
    return 0;
}