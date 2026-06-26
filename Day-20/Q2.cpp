#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int n;
    bool symmetric = true;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter elements of matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Checking symmetric matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric) {
        cout << "Matrix is symmetric";
    }
    else {
        cout << "Matrix is not symmetric";
    }

    return 0;
}