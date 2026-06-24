#include <iostream>
using namespace std;

int main()
{
    int num, original, rem, fact, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0)
    {
        rem = num % 10;
        fact = 1;

        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
    {
        cout << original << " is a Strong Number";
    }
    else
    {
        cout << original << " is not a Strong Number";
    }

    return 0;
}