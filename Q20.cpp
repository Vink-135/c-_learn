// 20. Create a class called Max. Calculate the greatest among three numbers using
// the else if ladder.

#include <iostream>
using namespace std;

class Max{
    public:
    int find_max(double a,double b,double c){
        if(a>=b && a>=c){
            cout<<a<<" is greatest."<<endl;
        }
        else if(b>=a && b>=c){
            cout<<b<<" is greatest."<<endl;
        }
        else if(c>=a && c>=b){
            cout<<c<<" is greatest."<<endl;
        }
        else{
            cout<<"Something is wrong"<<endl;
        }
        return 0;
    }
};

int  main(){
    Max num;
    num.find_max(23.34,34.434,3.9);
}