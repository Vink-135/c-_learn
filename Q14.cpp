// 14. Write a program where a base class defines a display() function, and the
// derived class overrides it to provide its implementation.
// Why is the virtual keyword necessary for overriding? 
// Ans. 	1.	Enables Runtime Polymorphism:
// 	•	Without the virtual keyword, the function call would be resolved at compile time (static binding) based on the type of the pointer/reference, not the actual object it points to.
// 	•	Using virtual enables dynamic binding (runtime resolution), allowing the derived class version of the function to be called.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function to allow overriding in derived class
    virtual void display() {
        cout << "Display function in Base class." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the base class function
    void display()  {
        cout << "Display function in Derived class." << endl;
    }
};

int main() {
    Base* basePointer;       // Pointer of Base class type
    Derived derivedObject;   // Object of Derived class
    
    basePointer = &derivedObject;

    // Call the display function
    basePointer->display();  // Calls Derived class display() due to virtual keyword

    return 0;
}