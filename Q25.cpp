// 25. Write a C++ program to demonstrate different types of inheritance by
// creating a hierarchy for a university management system.
// The program should include the following:
// ● Base Class (Person): Contains common attributes like name and age and a
// method to display them.
// ● Derived Class (Student): Inherits from Person and includes additional
// attributes like roll number and course.
// ● Derived Class (Faculty): Inherits from Person and includes attributes like
// employee ID and department.

#include <iostream>
#include <string>
using namespace std;

class person{
    protected:
    string name;
    int age;
    public:
    person(){
        cout<<"Enter Your Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Your Age: ";
        cin>>age;
    }
    void d_person(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
    }
};

class student:public person{
    protected:
    string course;
    int roll;
    public:
    student(){
        cout<<"Enter Your Course : ";
        cin.ignore();
        getline(cin,course);
        cout<<"Enter Your Roll No.: ";
        cin>>roll;
    }
    void d_student(){
        cout<<"Couse: "<<course<<endl<<"Roll No.: "<<roll<<endl;
    }
};

class faculty:public person{
    protected:
    string department;
    int employeid;
    public:
    faculty(){
        cout<<"Enter Your Department : ";
        cin.ignore();
        getline(cin,department);
        cout<<"Enter Your Employee Id.: ";
        cin>>employeid;
    }
    void d_faculty(){
        cout<<"Department: "<<department<<endl<<"Employee ID.: "<<employeid<<endl;
    }
};

int main(){
    student ram;
    faculty hardik;
    ram.d_person();
    ram.d_student();
    cout<<"-------------------------------"<<endl;
    hardik.d_person();
    hardik.d_faculty();
    return 0;
}