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

    // Row-wise sum
    cout << "Row-wise sum:" << endl;

    for(int i = 0; i < rows; i++) {
        sum = 0;

        for(int j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }

        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }

    return 0;
}