// Language: C++
// Category: C++ > Classes (Easy)
// Problem: Inherited Code
// Author: Dorukhan Bekdur

#include <iostream>
#include <string>
using namespace std;

// Custom exception class for invalid username length
class BadLengthException {
private: 
    int length;

public:
    // Constructor to initialize the error length
    BadLengthException(int errorLength) {
        length = errorLength;
    }

    // Function to return the invalid length
    int what() {
        return length;
    }
};

// Function to check if a username is valid
bool checkUsername(string username) {
    int n = username.length();

    // If username is shorter than 5, throw custom exception
    if (n < 5) {
        throw BadLengthException(n);
    }

    // Check if username contains consecutive 'w' characters
    for (int i = 0; i < n - 1; i++) {
        if (username[i] == 'w' && username[i + 1] == 'w') {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string username;
        cin >> username;

        try {
            bool isValid = checkUsername(username);
            if (isValid) {
                cout << "Valid" << '\n';
            } else {
                cout << "Invalid" << '\n';
            }
        } catch (BadLengthException& e) {
            cout << "Too short: " << e.what() << '\n';
        }
    }

    return 0;
}
