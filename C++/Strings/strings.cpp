// Language: C++
// Category: C++ > Strings
// Problem: Strings
// Author: Dorukhan Bekdur

#include <iostream>
#include <string>  // Required for string operations

using namespace std;

int main() {
    string a, b;

    // Read two strings
    cin >> a >> b;

    // Print lengths
    cout << a.length() << " " << b.length() << endl;

    // Print concatenation
    cout << a + b << endl;

    // Swap first characters
    swap(a[0], b[0]);

    // Print updated strings
    cout << a << " " << b << endl;

    return 0;
}
