#include <iostream>
using namespace std;

int palindrome(int n)
{
    int temp = n;
    int rev = 0;
    int rem;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(palindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}