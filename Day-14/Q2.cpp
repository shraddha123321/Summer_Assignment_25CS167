#include <iostream>
using namespace std;

int main()
{
    int num, element, count = 0;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter element to find frequency: ";
    cin >> element;

    while(num > 0)
    {
        int digit = num % 10;

        if(digit == element)
        {
            count++;
        }

        num = num / 10;
    }

    cout << "Frequency is: " << count;

    return 0;
}