#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, j, minIndex, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        minIndex = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array in ascending order:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}