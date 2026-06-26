#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, sum = 0;
    float average;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "Sum of array = " << sum << endl;
    cout << "Average of array = " << average;

    return 0;
}