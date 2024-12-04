#include<iostream>
using namespace std;
int main() {

    int test[2][2]={
        {2,3},
        {9,0}
    };

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){

            cout<<test[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
    
    }





