// Language: C++
// Category: C++ > Introduction
// Problem: Conditional Statements
// Author: Dorukhan Bekdur

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Read an integer from input
    cin >> n;

    // Check the value of n and print its English representation
    if (n == 1) {
        cout << "one" << endl;
    } else if (n == 2) {
        cout << "two" << endl;
    } else if (n == 3) {
        cout << "three" << endl;
    } else if (n == 4) {
        cout << "four" << endl;
    } else if (n == 5) {
        cout << "five" << endl;
    } else if (n == 6) {
        cout << "six" << endl;
    } else if (n == 7) {
        cout << "seven" << endl;
    } else if (n == 8) {
        cout << "eight" << endl;
    } else if (n == 9) {
        cout << "nine" << endl;
    } else {
        // If n is greater than 9
        cout << "Greater than 9" << endl;
    }

    return 0;
}
