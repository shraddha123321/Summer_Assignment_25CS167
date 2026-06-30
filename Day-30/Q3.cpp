#include <iostream>
#include <string>
using namespace std;

int main() {

    string name[50];
    int id[50];
    float salary[50];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEmployee " << i+1 << endl;

        cout << "Enter Employee ID: ";
        cin >> id[i];

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\n----- Employee Records -----\n";

    for(int i = 0; i < n; i++) {
        cout << "ID: " << id[i]
             << "  Name: " << name[i]
             << "  Salary: " << salary[i] << endl;
    }

    return 0;
}