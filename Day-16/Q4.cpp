#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}