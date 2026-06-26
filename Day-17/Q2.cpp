#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, k = 0;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter first array elements: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter second array elements: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i < n1; i++)
    {
        arr3[k++] = arr1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        bool found = false;

        for(int j = 0; j < k; j++)
        {
            if(arr2[i] == arr3[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            arr3[k++] = arr2[i];
        }
    }

    cout << "Union of arrays is: ";

    for(int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}