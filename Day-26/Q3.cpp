#include <iostream>
using namespace std;

int main() {
    int pin, choice;
    float balance = 5000, amount;

    cout << "Enter your ATM PIN: ";
    cin >> pin;

    if(pin == 1234) {

        do {
            cout << "\nATM MENU" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Withdraw Money" << endl;
            cout << "3. Deposit Money" << endl;
            cout << "4. Exit" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice) {

                case 1:
                    cout << "Your balance is: " << balance << endl;
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;

                    if(amount <= balance) {
                        balance = balance - amount;
                        cout << "Please collect your cash." << endl;
                        cout << "Remaining balance: " << balance << endl;
                    }
                    else {
                        cout << "Insufficient balance." << endl;
                    }
                    break;

                case 3:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;

                    balance = balance + amount;
                    cout << "Money deposited successfully." << endl;
                    cout << "Updated balance: " << balance << endl;
                    break;

                case 4:
                    cout << "Thank you for using ATM." << endl;
                    break;

                default:
                    cout << "Invalid choice." << endl;
            }

        } while(choice != 4);

    }
    else {
        cout << "Wrong PIN.";
    }

    return 0;
}