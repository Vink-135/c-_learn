// 24. Create a class called Factorial having member function fact() to calculate the
// factorial of a given number. Throw an exception if number entered by the user is
// negative or zero

#include <iostream>
using namespace std;

class factorial{
    public:
    int fact(int n){
        try{
            if(n <= 0){
                throw 101;
            }
            else{
                int res=1;
                for(int i = 1; i<=n;i++){
                    res*=i;
                }
                return res;
            }
        }
        catch(int error){
            cout<<"Number cannot be zero or less then zero"<<endl;
            return 0;
        }
    }
};

int main(){
    factorial demo;
    int num = 5;
    cout<<"Factorial Of "<<num<<" is "<<demo.fact(num)<<endl;
    return 0;
}