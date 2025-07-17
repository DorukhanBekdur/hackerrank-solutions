// Language: C++
// Category: C++ > Introduction
// Problem: Variable Sized Arrays
// Author: Dorukhan Bekdur

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    
    // Read number of arrays and number of queries
    cin >> n >> q;

    // Declare a vector of vectors (2D vector)
    vector<vector<int>> arr(n);

    // Read each array
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        // Resize the inner vector to k elements
        arr[i].resize(k);

        // Read k elements
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // Process queries
    for (int q_i = 0; q_i < q; q_i++) {
        int i, j;
        cin >> i >> j;

        // Output the j-th element in the i-th array
        cout << arr[i][j] << endl;
    }

    return 0;
}
