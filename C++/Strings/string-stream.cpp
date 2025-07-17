// Language: C++
// Category: C++ > Strings
// Problem: StringStream
// Author: Dorukhan Bekdur

#include <iostream>
#include <sstream>  // Required for stringstream
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    stringstream ss(input); // Create a stringstream from input
    vector<int> numbers;
    string token;

    // Split the string by commas and convert tokens to integers
    while (getline(ss, token, ',')) {
        numbers.push_back(stoi(token)); // stoi: string to integer
    }

    // Print each number on a new line
    for (int num : numbers) {
        cout << num << endl;
    }

    return 0;
}
