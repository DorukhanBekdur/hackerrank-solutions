// Language: C++
// Category: C++ > Introduction
// Problem: Functions
// Dorukhan Bekdur

#include <iostream>
using namespace std;

// Function to return the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max_val = a;

    if (b > max_val) {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }
    if (d > max_val) {
        max_val = d;
    }

    return max_val;
}

int main() {
    int a, b, c, d;
    
    // Read four integers
    cin >> a >> b >> c >> d;
    
    // Print the maximum value among them
    cout << max_of_four(a, b, c, d) << endl;

    return 0;
}
