// Language: C++
// Category: C++ > Introduction
// Problem: Basic Data Types
// Author: Dorukhan Bekdur

#include <iostream>     // For input/output operations
#include <iomanip>      // For controlling output formatting
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read inputs in the given order
    cin >> i >> l >> c >> f >> d;

    // Print each variable on a new line
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;

    // Set precision for float and double outputs
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
