#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {

    Student s[100];
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    do {
        cout << "\nStudent Record Management System" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Records" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++) {
                    cout << "\nEnter roll number: ";
                    cin >> s[i].rollNo;

                    cout << "Enter name: ";
                    cin >> s[i].name;

                    cout << "Enter marks: ";
                    cin >> s[i].marks;
                }
                cout << "Record added successfully!" << endl;
                break;

            case 2:
                cout << "\nStudent Records:" << endl;

                for(int i = 0; i < n; i++) {
                    cout << "\nRoll No: " << s[i].rollNo;
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks << endl;
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