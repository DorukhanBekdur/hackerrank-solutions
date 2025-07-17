// Language: C++
// Category: C++ > Introduction
// Problem: Arrays Introduction
// Author: Dorukhan Bekdur

#include <iostream>
using namespace std;

int main() {
    int n;

    // Read the size of the array
    cin >> n;

    int arr[n]; // Declare array of size n

    // Read n integers into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
