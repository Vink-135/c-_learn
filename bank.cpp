#include <iostream>
#include <string>
using namespace std;

// Base class
class BankAccount {
protected:
    string userName;
    long accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string name, long accNo, double initialBalance = 0) {
        userName = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << userName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << " INR" << endl;
    }
};

// Derived class
class BankingOperations : public BankAccount {
public:
    // Constructor to initialize base class
    BankingOperations(string name, long accNo, double initialBalance = 0)
        : BankAccount(name, accNo, initialBalance) {}

    // Function to perform credit
    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " INR credited to your account.\n";
        } else {
            cout << "Invalid amount. Please enter a positive value.\n";
        }
    }

    // Function to perform debit
    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " INR debited from your account.\n";
        } else {
            cout << "Invalid transaction. Check your balance or amount.\n";
        }
    }
};

// Main function
int main() {
    string name;
    long accNo;
    double initialDeposit;

    cout << "Welcome to the Banking System!\n";
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your bank account number: ";
    cin >> accNo;
    cout << "Enter your initial deposit amount: ";
    cin >> initialDeposit;

    // Create a banking object
    BankingOperations user(name, accNo, initialDeposit);

    int choice;
    do {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Display Account Details\n";
        cout << "2. Credit (Deposit Money)\n";
        cout << "3. Debit (Withdraw Money)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                user.displayAccountDetails();
                break;
            case 2: {
                double amount;
                cout << "Enter amount to credit: ";
                cin >> amount;
                user.credit(amount);
                break;
            }
            case 3: {
                double amount;
                cout << "Enter amount to debit: ";
                cin >> amount;
                user.debit(amount);
                break;
            }
            case 4:
                cout << "Thank you for using the Banking System. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}


