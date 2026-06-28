#include <iostream>
#include <string>
using namespace std;

class Contact {
    string name[100];
    string phone[100];
    string email[100];
    int count = 0;

public:

    void addContact() {

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[count]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[count]);

        cout << "Enter Email: ";
        getline(cin, email[count]);

        count++;

        cout << "Contact Added Successfully!\n";
    }


    void displayContacts() {

        if(count == 0) {
            cout << "No Contacts Available!\n";
            return;
        }

        cout << "\nContact List\n";

        for(int i = 0; i < count; i++) {

            cout << "\nName: " << name[i];
            cout << "\nPhone: " << phone[i];
            cout << "\nEmail: " << email[i] << endl;
        }
    }


    void searchContact() {

        string searchName;

        cin.ignore();

        cout << "Enter Name to Search: ";
        getline(cin, searchName);


        for(int i = 0; i < count; i++) {

            if(name[i] == searchName) {

                cout << "\nContact Found";
                cout << "\nName: " << name[i];
                cout << "\nPhone: " << phone[i];
                cout << "\nEmail: " << email[i] << endl;

                return;
            }
        }

        cout << "Contact Not Found!\n";
    }


    void deleteContact() {

        string deleteName;

        cin.ignore();

        cout << "Enter Name to Delete: ";
        getline(cin, deleteName);


        for(int i = 0; i < count; i++) {

            if(name[i] == deleteName) {

                for(int j = i; j < count-1; j++) {

                    name[j] = name[j+1];
                    phone[j] = phone[j+1];
                    email[j] = email[j+1];
                }

                count--;

                cout << "Contact Deleted Successfully!\n";
                return;
            }
        }

        cout << "Contact Not Found!\n";
    }

};


int main() {

    Contact c;
    int choice;


    do {

        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;


        switch(choice) {

            case 1:
                c.addContact();
                break;

            case 2:
                c.displayContacts();
                break;

            case 3:
                c.searchContact();
                break;

            case 4:
                c.deleteContact();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }


    } while(choice != 5);


    return 0;
}
