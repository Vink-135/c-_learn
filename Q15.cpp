// 15. Write a program to demonstrate the use of a parameterized constructor. Create
// a class Rectangle that accepts the length and width as arguments and calculates the
// area of the rectangle.

#include <iostream>
using namespace std;

class rectangle{
    public:
    rectangle(float length,float width){
        cout<<"Area of rectangle: " <<length*width<<endl;
    }
};

int main(){
    rectangle demo(10.2,12.3);
    return 0;
}