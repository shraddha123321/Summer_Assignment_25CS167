#include <iostream>
using namespace std;

int main() {
    int arr[100], n, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting in descending order
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Array in descending order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}