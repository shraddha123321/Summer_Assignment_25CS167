#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
};

int main() {

    Student s;
    int choice;

    cout << "Marksheet Generation System" << endl;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    s.total = 0;

    cout << "Enter marks of 5 subjects:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> s.marks[i];
        s.total = s.total + s.marks[i];
    }

    s.percentage = s.total / 5.0;

    cout << "\n----- MARKSHEET -----" << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;

    cout << "Marks:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << i+1 << ": " << s.marks[i] << endl;
    }

    cout << "Total Marks: " << s.total << endl;
    cout << "Percentage: " << s.percentage << "%" << endl;

    if(s.percentage >= 40) {
        cout << "Result: Pass";
    }
    else {
        cout << "Result: Fail";
    }

    return 0;
}