#include <iostream>
using namespace std;

bool isPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isPerfect(n))
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";

    return 0;
}