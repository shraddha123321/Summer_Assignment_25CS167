#include <iostream>
using namespace std;

// Function to check prime
bool checkPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(checkPrime(num))
        cout << "Number is Prime";
    else
        cout << "Number is Not Prime";

    return 0;
}