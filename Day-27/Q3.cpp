#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main() {

    Employee emp[100];
    int n, choice;

    cout << "Enter number of employees: ";
    cin >> n;

    do {
        cout << "\nSalary Management System" << endl;
        cout << "1. Add Salary Details" << endl;
        cout << "2. Display Salary Details" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++) {

                    cout << "\nEnter Employee ID: ";
                    cin >> emp[i].id;

                    cout << "Enter Employee Name: ";
                    cin >> emp[i].name;

                    cout << "Enter Basic Salary: ";
                    cin >> emp[i].basicSalary;

                    cout << "Enter Bonus: ";
                    cin >> emp[i].bonus;

                    emp[i].totalSalary = emp[i].basicSalary + emp[i].bonus;
                }

                cout << "Salary details added successfully!" << endl;
                break;


            case 2:
                cout << "\nSalary Details:" << endl;

                for(int i = 0; i < n; i++) {

                    cout << "\nEmployee ID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nBasic Salary: " << emp[i].basicSalary;
                    cout << "\nBonus: " << emp[i].bonus;
                    cout << "\nTotal Salary: " << emp[i].totalSalary << endl;
                }
                break;


            case 3:
                cout << "Exit Successfully.";
                break;


            default:
                cout << "Invalid choice.";
        }

    } while(choice != 3);


    return 0;
}