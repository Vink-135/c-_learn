// 22. Create a program for “Student Grading System”
// 90% and above: Grade A
// 75% - 89%: Grade B
// 50% - 74%: Grade C
// Below 50%: Grade F

#include <iostream>
using namespace std;

int main(){
    int marks=0;
    cout<<"Enter Mark Optained (%): ";
    cin>>marks;
    if(marks >= 90 && marks <=100){
        cout<<"Class: A"<<endl;
    }
    else if(marks<=89 && marks>=75){
        cout<<"Class: B"<<endl;
    }
    else if(marks<=74 && marks>=50){
        cout<<"Class: C"<<endl;
    }
    else if(marks<50 && marks>=0){
        cout<<"Class: F"<<endl;
    }
    else{
        cout<<"Invalid Marks Input"<<endl;
    }
    return 0;
}