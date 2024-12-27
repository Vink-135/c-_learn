// 23. Create an Array having 20 integer inputs from user and print the following:

// ● number of positive numbers
// ● number of negative numbers
// ● number of odd numbers
// ● number of even numbers
// ● number of 0s.

#include <iostream>
using namespace std;

int main(){
    int nums[20]={};
    for(int i=0;i<20;i++){
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"Positive Number: ";
    for(int i=0;i<20;i++){
        if(nums[i] > 0){
            cout<<nums[i]<<",";
        }
    }
    cout<<endl;
    cout<<"Negative Number: ";
    for(int i=0;i<20;i++){
        if(nums[i] < 0){
            cout<<nums[i]<<",";
        }
    }
    cout<<endl;
    cout<<"Odd Number: ";
    for(int i=0;i<20;i++){
        if(nums[i] % 2 != 0){
            cout<<nums[i]<<",";
        }
    }
    cout<<endl;
    cout<<"Even Number: ";
    for(int i=0;i<20;i++){
        if(nums[i] % 2 == 0){
            cout<<nums[i]<<",";
        }
    }
    cout<<endl;
    cout<<"0s Number: ";
    for(int i=0;i<20;i++){
        if(nums[i] == 0){
            cout<<nums[i]<<",";
        }
    }
    cout<<endl;
}