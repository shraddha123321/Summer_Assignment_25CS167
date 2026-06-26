#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int n, sum = 0;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter elements of matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Finding diagonal sum
    for(int i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    cout << "Sum of diagonal elements: " << sum;

    return 0;
}