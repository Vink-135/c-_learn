// 19. Write a program to simulate an online purchase. If the debit card number is
// invalid or the balance is insufficient, throw an exceptions for each case and handle
// them in separate catch blocks.

#include <iostream>
using namespace std;

class shopping {
    private:
        long debitcard = 12345678910;
        double balance = 1000.00;
    public:
        int purchase(long cardnum, double amount) {
            try {
                if(cardnum != debitcard) {
                    throw 101;
                }
                else {
                    if(amount > balance) {
                        throw 102;
                    }
                    else {
                        balance -= amount;
                        cout << "Purchase Success!" << endl;
                        cout << "Updated Balace: " << balance << endl;
                        return 1;
                    }
                }
            }
            catch(int error) {
                if(error == 101) {
                    cout << "Error: Invalid Card Number!" << endl;
                }
                else if(error == 102) {
                    cout << "Error: Insufficient Balance!" << endl;
                }
                return 0;
            }
        }
};

int main() {
    shopping shop;
    shop.purchase(12345678910, 200.90);
    shop.purchase(11111111111, 100);
    shop.purchase(12345678910, 2000);
    
    return 0;
}

