#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {

    Employee emp[100];
    int n, choice;

    cout << "Enter number of employees: ";
    cin >> n;

    do {
        cout << "\nEmployee Management System" << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display Employee Records" << endl;
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

                    cout << "Enter Employee Salary: ";
                    cin >> emp[i].salary;
                }

                cout << "Employee record added successfully!" << endl;
                break;


            case 2:
                cout << "\nEmployee Records:" << endl;

                for(int i = 0; i < n; i++) {

                    cout << "\nEmployee ID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nSalary: " << emp[i].salary << endl;
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