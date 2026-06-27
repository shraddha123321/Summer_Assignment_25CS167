#include <iostream>
using namespace std;

int main()
{
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin >> str;

    // Count frequency of each character
    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    char maxChar = str[0];
    int max = freq[str[0]];

    // Find maximum occurring character
    for(int i = 1; i < str.length(); i++)
    {
        if(freq[str[i]] > max)
        {
            max = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << max;

    return 0;
}