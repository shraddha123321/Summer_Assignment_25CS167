#include <iostream>
using namespace std;

int main() {
    string names[100];
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    cout << "Enter names:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sorting names alphabetically
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}