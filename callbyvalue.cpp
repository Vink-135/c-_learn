#include <iostream>
using namespace std;
// callbyvalue
void callbyvalue(int a){
    int c = a + 10;
    cout<<"Value of C: "<<c<<endl;
}

// callbyreference
void callbyreference(int &a){
    a+=10;
    cout<<"Value of a: "<<a<<endl;
}

int main(){
    int x = 10;
    cout<<"Value of X: "<<x<<endl;
    cout<<"trying call by value"<<endl;
    callbyvalue(x);
    cout<<"Value of X: "<<x<<endl;

//     cout<<"Value of X: "<<x<<endl;
//     cout<<"trying call by referance"<<endl;
//     callbyreference(x);
//     cout<<"Value of X: "<<x<<endl;
// 
}