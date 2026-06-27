#include <iostream>
using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        bool found = false;

        for(int j = 0; j < result.length(); j++)
        {
            if(str[i] == result[j])
            {
                found = true;
                break;
            }
        }

        if(found == false)
        {
            result = result + str[i];
        }
    }

    cout << "After removing duplicate characters = " << result;

    return 0;
}