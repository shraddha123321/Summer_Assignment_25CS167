#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], sub[10][10];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Subtraction
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction of matrices:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}