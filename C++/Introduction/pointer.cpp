// Language: C++
// Category: C++ > Introduction
// Problem: Pointer
// Author: Dorukhan Bekdur


#include <iostream>
using namespace std;

// This function updates values using pointers
void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;

    // Read two integers
    cin >> a >> b;

    // Call update with addresses of a and b
    update(&a, &b);

    // Print updated values
    cout << a << endl;
    cout << b << endl;

    return 0;
}
