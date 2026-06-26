#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int rows, cols, sum;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Column-wise sum
    cout << "Column-wise sum:" << endl;

    for(int j = 0; j < cols; j++) {
        sum = 0;

        for(int i = 0; i < rows; i++) {
            sum = sum + matrix[i][j];
        }

        cout << "Column " << j + 1 << " sum = " << sum << endl;
    }

    return 0;
}