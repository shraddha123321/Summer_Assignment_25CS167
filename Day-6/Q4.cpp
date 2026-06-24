#include <iostream>
using namespace std;

int main()
{
    int x, n;
    long long result = 1;

    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << x << "^" << n << " = " << result;

    return 0;
}