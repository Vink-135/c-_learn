// 21. Write a program to input basic salary of an employee and calculate its Gross
// salary according to following:

// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;

int main(){
    int salary=0;
    cout<<"Enter Your Basic Salary: ";
    cin>>salary;
    if(salary <= 10000){
        cout<<"HRA = 20%, DA = 80%"<<endl;
    }
    else if(salary<=20000 && salary>10000){
        cout<<"HRA = 25%, DA = 90%"<<endl;
    }
    else if(salary > 20000){
        cout<<"HRA = 30%, DA = 95%"<<endl;
    }
    else{
        cout<<"Invalid Salary"<<endl;
    }
    return 0;
}