#include <iostream>
using namespace std;

int main()
{
    string str;
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[length] != '\0')
    {
        length++;
    }

    cout << "Length of string = " << length;

    return 0;
}