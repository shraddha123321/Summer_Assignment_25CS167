#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    int count1[256] = {0};
    int count2[256] = {0};

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    for(int i = 0; i < str1.length(); i++)
    {
        count1[str1[i]]++;
    }

    for(int i = 0; i < str2.length(); i++)
    {
        count2[str2[i]]++;
    }

    bool anagram = true;

    for(int i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
    {
        cout << "Strings are Anagram";
    }
    else
    {
        cout << "Strings are not Anagram";
    }

    return 0;
}