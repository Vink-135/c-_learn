// 29. Create a program for matrix operations (addition)
#include <iostream>
using namespace std;

int main(){
    int matrix[2][2]={};
    int matrix2[2][2]={};

    int matrix_addition[2][2]={};
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter Value for (Matrix 1) ["<<i<<","<<j<<"] ";
            cin>>matrix[i][j];
        }
    }
     for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter Value for (Matrix 2) ["<<i<<","<<j<<"] ";
            cin>>matrix2[i][j];
        }
    }
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
           matrix_addition[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
          cout << matrix_addition[i][j];
          if(j<1){
            cout<<" , ";
          }
        }
        cout<<endl;
    }
}