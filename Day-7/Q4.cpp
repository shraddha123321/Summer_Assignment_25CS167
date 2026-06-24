#include <iostream>
using namespace std;

int reverseNumber(int n, int rev)
{
    if(n == 0)
    {
        return rev;
    }
    else
    {
        return reverseNumber(n / 10, rev * 10 + (n % 10));
    }
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Reverse number = " << reverseNumber(n, 0);

    return 0;
}