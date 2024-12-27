// 28. Develop a C++ program for a Student Management System that incorporates
// the following
// Menu-Driven Approach: Provide options for:
// ● Adding a new student.(SID,SNAME,CLASS THROUGH USER INPUT)
// ● DISPLAY student DETAILS.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int student_count=0;
vector<string> sname;
vector<int> sid;
vector<int> sclass;

int addstudent(string n,int c,int r);
int displaylist();
int menu();
int main(){
cout<<"-----WELCOME TO ITM STUDENT MANAGEMENT TOOL------"<<endl;
menu();
return 0;
}

int addstudent(string n,int c,int r){
    if(n!="" && c!=0 && r!=0){
        sname.push_back(n);
        sclass.push_back(c);
        sid.push_back(r);
        student_count++;
        cout<<"Student Added Success!"<<endl;
        menu();
        return 0;
    }
    else{
        cout<<"Please Provide All Details"<<endl;
        menu();
        return 0;
    }
    return 0;
}
int displaylist() {
    cout << "Name:" << "\t" << "Class:" << "\t" << "Roll No:" << endl;
    for (int i = 0; i < student_count; i++) {
        cout << sname[i] << "\t" << sclass[i] << "\t" << sid[i] << endl;
    }
    menu();
    return 0;
}

int menu(){
    int option=0;
    string name="";
    int scl=0;
    int sro=0;
    cout<<"------Menu------"<<endl;
    cout<<"1. Add Student"<<endl<<"2. Display student"<<endl;
    cout<<"Selected Option: ";
    cin>>option;
    if(option == 1){
        cout<<"Student "<<student_count+1<<" : "<<endl;
        cout<<"Student Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Student Class: ";
        cin>>scl;
        cout<<"Student Roll No.: ";
        cin>>sro;
        addstudent(name,scl,sro);
        return 0;
    }
    else if(option==2){
        displaylist();
        return 0;
    }
    else{
        cout<<"Invalid Input."<<endl;
        menu();
        return 0;
    }
}
