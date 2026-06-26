#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;

    cout << "Missing number is: " << total - sum;

    return 0;
}