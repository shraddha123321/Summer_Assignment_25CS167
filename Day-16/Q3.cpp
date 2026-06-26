#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter given sum: ";
    cin >> sum;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "Pair not found";

    return 0;
}