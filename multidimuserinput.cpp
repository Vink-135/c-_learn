#include<iostream>
using namespace std;
int main() {
    int x[2][2];
    for (int i=0 ;i<4 ; i++){

        for(int j=0;j<4;j++ ){
            cout<<"Enter the value:";
            cin>>x[i][j];
        }

    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"The array is:"<<x[j][i]<<" ";
        }
        cout<<endl;

    }    
    
    

    
}

    return 0;
}