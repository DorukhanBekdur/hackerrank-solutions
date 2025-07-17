// Language: C++
// Category: C++ > Classes (Easy)
// Problem: Classes and Objects
// Author: Dorukhan Bekdur

#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];

public:
    // Read 5 scores from input
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    // Calculate total of the 5 scores
    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n; // number of students
    cin >> n;

    Student* students = new Student[n];

    // Read scores for each student
    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    // Get total score of first student
    int kristen_score = students[0].calculateTotalScore();

    // Count how many students scored higher than the first
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = students[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    cout << count << endl;

    delete[] students;
    return 0;
}
