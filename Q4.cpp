// 4. Write a program to demonstrate function overloading by creating three functions
// named max:
// int max(int a, int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.
#include <iostream>
using namespace std;
int max(int a, int b){
    int max;
    if(a>=b){
        max=a;
    }
    else{
        max=b;
    }
    return max;
}

double max(double a, double b){
    double max;
    if(a>=b){
        max=a;
    }
    else{
        max=b;
    }
    return max;
}

int main(){
    cout<<"max(10,20) : "<<max(10,20)<<endl;
    cout<<"max(1.43,2.46) : "<<max(1.43,2.46)<<endl;

}