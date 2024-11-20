// A program that displays the name of the day based on the number entered by the user    (1 for Monday, 2 for Tuesday, etc.).
#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter your value:";
    cin>>a;


    if(a==0){
        cout<<"Your day is sunday:";
        

    }
    else if (a==1){
        cout<<"your day is monday";
    
    }
    else if (a==2){
        cout<<"your day is tuesday";
    
    }
    else if (a==3){
        cout<<"Your day is wednesday";
    
    }

    else if (a==4){
        cout<<"your day is thursday";
    
    }
    else if (a==5){
        cout<<"your day is friday";
    
    }
    else if (a==6){
        cout<<"your day is saturday";
    
    }
    


    


}