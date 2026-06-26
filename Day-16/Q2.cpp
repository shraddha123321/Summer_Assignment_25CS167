#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, maxCount = 0, element = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    cout << "Maximum frequency element is: " << element;
    cout << "\nFrequency is: " << maxCount;

    return 0;
}