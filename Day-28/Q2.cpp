#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    int accountNumber;
    string name;
    float balance;

public:

    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account Created Successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Money Deposited Successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Money Withdrawn Successfully!\n";
        }
        else {
            cout << "Insufficient Balance!\n";
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void displayAccount() {
        cout << "\nAccount Details\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account;
    int choice;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.checkBalance();
                break;

            case 5:
                account.displayAccount();
                break;

            case 6:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}