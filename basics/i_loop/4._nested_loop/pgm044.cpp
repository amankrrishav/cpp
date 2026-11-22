// **HISTOGRAM**
// Histogram displays the ouput in --- , ---- , ----- 

// ques - take input in the form of no_of_data from the user, and whatever the input is display it in terms of ( -- )
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> data;

    int data_items;
    cout<<"Enter the data items you have: ";
    cin >> data_items;

    int i;
    for(i=1;i<=data_items;i++){ 
    int value;
    cout<<"Enter the values in "<< i<< " : ";
    cin>>value;

    data.push_back(value); //value whichever user enter gets pushed into vector declared = (data)
    }
    cout<<"\n---HISTOGRAM---"<<endl;

    for(auto val: data){ // using ranged based for() //data is vector declared initially below main()
        for(i=1;i<=val;++i){ // declaring and ini i // incrementation will happen for no_of_val
        cout<< "-"; // - will be output for every increment
    }
    cout<<endl;
}
    return 0;
}