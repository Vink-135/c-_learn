// 2. Write a C++ program to define a class Student with the following:
// Private data members: name and age.
// A parameterized constructor to initialize the name and age.
// A copy constructor to create a copy of an existing Student object.
// A member function display() to print the details of the student.
// In the main() function, create an object of the Student class using the
// parameterized constructor and another object using the copy constructor. Display
// the details of both students.

#include <iostream>
#include <string>
using namespace std;

// class Student{
//     public:
//     int age;
//     string name;
//     Student(string n,int a){
//         age=a;
//         name=n;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
//     }
// };

// int main(){
//     Student Ankit("Ankit Kumar",19);
//     Ankit.display();
//     Student Kumar = Ankit;
//     Kumar.display();
// }

class Student{
    public:
    int age;
    string name;
    Student(string n,int a){
        age=a;
        name=n;

    }
    void display(){
        cout<<"name of the student:"<<name<<endl<<"Age of student:"<<age<<endl;
    }
    
};
int main(){

    Student Ankit("Ankit Kumar",19);
    Ankit.display();
    Student Kumar =Ankit;
    Kumar.display();
}