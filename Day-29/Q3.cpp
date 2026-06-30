#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do
    {
        cout << "\n----- Menu Driven String Operations System -----";
        cout << "\n1. Display String";
        cout << "\n2. Find String Length";
        cout << "\n3. Reverse String";
        cout << "\n4. Check Palindrome";
        cout << "\n5. Concatenate String";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "String: " << str;
                break;

            case 2:
                cout << "Length of string = " << str.length();
                break;

            case 3:
                rev = "";

                for(int i = str.length()-1; i >= 0; i--)
                {
                    rev += str[i];
                }

                cout << "Reverse String = " << rev;
                break;

            case 4:
                rev = "";

                for(int i = str.length()-1; i >= 0; i--)
                {
                    rev += str[i];
                }

                if(str == rev)
                    cout << "String is Palindrome";
                else
                    cout << "String is not Palindrome";

                break;

            case 5:
            {
                string str2;
                cout << "Enter another string: ";
                cin.ignore();
                getline(cin, str2);

                str = str + str2;

                cout << "Concatenated String = " << str;
                break;
            }

            case 6:
                cout << "Exit";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 6);

    return 0;
}