#include <iostream>
using namespace std;

int main()
{
    int num, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            bool prime = true;

            for(int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    prime = false;
                    break;
                }
            }

            if(prime)
            {
                largest = i;
            }
        }
    }

    cout << "Largest prime factor of " << num << " is: " << largest;

    return 0;
}