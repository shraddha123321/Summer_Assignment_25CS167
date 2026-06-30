#include <iostream>
#include <string>
using namespace std;

string name[50];
int roll[50];
float marks[50];
int n = 0;

// Function to add student
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;

    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents() {

    if(n == 0) {
        cout << "No records available\n";
    }
    else {
        cout << "\n----- Student Records -----\n";

        for(int i = 0; i < n; i++) {
            cout << "Roll No: " << roll[i]
                 << "  Name: " << name[i]
                 << "  Marks: " << marks[i] << endl;
        }
    }
}

// Function to search student
void searchStudent() {

    int r;
    bool found = false;

    cout << "Enter Roll Number to search: ";
    cin >> r;

    for(int i = 0; i < n; i++) {
        if(roll[i] == r) {
            cout << "Student Found\n";
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Student not found\n";
    }
}

int main() {

    int choice;

    do {
        cout << "\n===== Mini Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}