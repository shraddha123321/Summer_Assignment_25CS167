#include <iostream>
using namespace std;

int main()
{
    string sentence;
    int words = 1;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == ' ')
        {
            words++;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}