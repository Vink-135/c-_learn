//A simple grading system using switch to select the grade based on marks.
#include<iostream>
using namespace std;
int main() {
   int a;
   cout<<"ENTER YOUR MARKS:";
   cin>>a;
   if (a>=90){


    cout<<"YOU GOT AN A GRADE";
   }
   else if (a>=80){

    cout<<"YOU GOT AN B GRADE";

   }
   else if (a>=70){

    cout<<"YOU GOT AN C GRADE";

   }
   else {
        cout<<"YOU GOT AN D-GRADE";
    }
   



}
