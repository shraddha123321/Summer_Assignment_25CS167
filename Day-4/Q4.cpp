#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(int num = start; num <= end; num++)
    {
        int original = num;
        int temp = num;
        int digit, sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == original)
        {
            cout << original << " ";
        }
    }

    return 0;
}