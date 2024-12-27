// 16. Create a simple Bank Account class with a method to withdraw money. Throw
// an exception if the withdrawal amount exceeds the account balance.

#include <iostream>
using namespace std;

class bankaccount{
    public:
    double balance;
    bankaccount(){
        balance = 1200;
    }
    void withdraw(double amount){
        try{
            if(amount>balance){
                throw 101;
            }
            else{
                balance-=amount;
                cout<<"withdraw success!"<<endl;
                cout<<"Updated Balance: "<<balance<<endl;
            }
        }
        catch(int error){
            cout<<"ERROR "<<error<<" : Insufficient Balance"<<endl;
        }
    }
};

int main(){
    bankaccount raju;
    raju.withdraw(200);
    raju.withdraw(1200);
    return 0;
}



