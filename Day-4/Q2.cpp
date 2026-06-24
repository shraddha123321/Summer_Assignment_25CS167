#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next;

    cout << "Enter nth term: ";
    cin >> n;

    if(n == 1)
    {
        cout << "Fibonacci term = " << first;
    }
    else if(n == 2)
    {
        cout << "Fibonacci term = " << second;
    }
    else
    {
        for(int i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }

        cout << "Fibonacci term = " << second;
    }

    return 0;
}