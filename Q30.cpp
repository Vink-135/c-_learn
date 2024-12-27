// 30.SWAPPING OF TWO NUMBERS USING POINTERS.

#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *a=temp;
}
int main(){
    int a;
    int b;
    a=3;
    b=5;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
}