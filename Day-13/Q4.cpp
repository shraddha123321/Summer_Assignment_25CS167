#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int even = 0, odd = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Total even elements = " << even << endl;
    cout << "Total odd elements = " << odd;

    return 0;
}