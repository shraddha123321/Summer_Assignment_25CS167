#include <iostream>
using namespace std;

int main() {
    string words[100];
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Sorting words by length
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(words[i].length() > words[j].length()) {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "Words sorted by length:" << endl;
    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}