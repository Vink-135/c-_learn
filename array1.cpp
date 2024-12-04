#include<iostream>
using namespace std;
int main() {
    int a[3] = {10,20,30};
    int *ptr = a;
    cout<<"access 1st element: "<<*ptr<<endl;
    cout<<"access 2nd element: "<<*(ptr+1)<<endl;
    cout<<"access 3rd element: "<<*(ptr+2)<<endl;


   return 0; 
}

