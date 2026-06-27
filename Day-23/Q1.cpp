#include <iostream>
using namespace std;

int main()
{
    string str;
    int count[256] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(count[str[i]] == 1)
        {
            cout << "First non-repeating character = " << str[i];
            break;
        }
    }

    return 0;
}