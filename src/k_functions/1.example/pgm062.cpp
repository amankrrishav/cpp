//ques-modify actual array

#include<iostream>

using namespace std;

void swap(int org_A[]);

int main(){
    int org_A[]{5,2,8,1,9};
    swap(org_A);
    return 0;
}

void swap(int org_A[]){
    int i;
     int temp=org_A[0];
     org_A[0]=org_A[4];
     org_A[4]=temp;
     for(i=0;i<5;i++)
     cout<<org_A[i]<< " " <<endl;
}