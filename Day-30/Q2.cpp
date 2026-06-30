#include <iostream>
#include <string>
using namespace std;

int main() {

    string books[50];
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter book name " << i+1 << ": ";
        cin.ignore();
        getline(cin, books[i]);
    }

    cout << "\n----- Library Books -----\n";

    for(int i = 0; i < n; i++) {
        cout << i+1 << ". " << books[i] << endl;
    }

    return 0;
}