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

    cout << "Character frequency:" << endl;

    for(int i = 0; i < 256; i++)
    {
        if(count[i] > 0)
        {
            cout << char(i) << " = " << count[i] << endl;
        }
    }

    return 0;
}