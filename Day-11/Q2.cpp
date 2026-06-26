#include <iostream>
using namespace std;

// Function to find maximum
int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = maximum(num1, num2);

    cout << "Maximum number = " << result;

    return 0;
}