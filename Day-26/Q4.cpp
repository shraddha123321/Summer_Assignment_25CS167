#include <iostream>
using namespace std;

int main() {

    int answer;
    int score = 0;

    cout << "Welcome to Quiz Application!" << endl;

    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. Delhi" << endl;
    cout << "3. Kolkata" << endl;
    cout << "4. Chennai" << endl;

    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2) {
        score++;
    }

    // Question 2
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "1. HTML" << endl;
    cout << "2. Python" << endl;
    cout << "3. C++" << endl;
    cout << "4. Java" << endl;

    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3) {
        score++;
    }

    // Question 3
    cout << "\n3. How many days are there in a week?" << endl;
    cout << "1. 5" << endl;
    cout << "2. 6" << endl;
    cout << "3. 7" << endl;
    cout << "4. 8" << endl;

    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3) {
        score++;
    }

    cout << "\nQuiz completed!" << endl;
    cout << "Your score is: " << score << "/3" << endl;

    return 0;
}