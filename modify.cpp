#include<iostream>
using namespace std;
int main() {


    int x[10]={1,2,3,4,5};
    x[5]=20;

    for (int i=0;i<10;i++){
        cout<<x[i];
    }
    return 0;
}