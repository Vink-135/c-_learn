// 18. Build a simple calculator using a switch case.

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char opr;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter Oprator (+ , - , * , /): ";
    cin>>opr;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    switch(opr){
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        return 0;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        return 0;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        return 0;
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        return 0;
    }

}