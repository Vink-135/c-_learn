//A program that uses if and else statements to find the largest of three numbers.
#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter your number1:";
    cin>>a;
    cout<<"enter your number2:";
    cin>>b;
    cout<<"enter your number3:";
    cin>>c;


    if(a>b and a>c){
        cout<<"The largest number is :"<<a;
        

    }
    else if (b>c){
        cout<<"The largest number is:"<<b;
    
    }
    else {
        cout<<"The largest number is:"<<c;
    }



}