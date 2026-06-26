#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest, second;

    if(a > b && a > c)
    {
        largest = a;
        second = (b > c) ? b : c;
    }
    else if(b > a && b > c)
    {
        largest = b;
        second = (a > c) ? a : c;
    }
    else
    {
        largest = c;
        second = (a > b) ? a : b;
    }

    cout << "Second largest element is: " << second;

    return 0;
}