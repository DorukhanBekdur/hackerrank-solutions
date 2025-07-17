// Language: C++
// Category: C++ > Strings (Medium)
// Problem: Attribute Parser
// Author: Dorukhan Bekdur

#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore(); // Clear newline character from input buffer

    vector<string> hrml; // To store HRML lines
    vector<string> quer; // To store queries

    // Read HRML lines
    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp);
        hrml.push_back(temp);
    }

    // Read queries
    for (int i = 0; i < q; i++) {
        string temp;
        getline(cin, temp);
        quer.push_back(temp);
    }

    map<string, string> m;       // To store key-value pairs of attributes
    vector<string> tag;          // To maintain current tag path (supports nesting)

    for (int i = 0; i < n; i++) {
        string temp = hrml[i];

        // Remove double quotes and '>' symbols from line
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());

        // If it's a closing tag
        if (temp.substr(0, 2) == "</") {
            tag.pop_back(); // Remove last tag from path
        } 
        // If it's an opening tag
        else {
            stringstream ss;
            ss << temp;
            string t1, p1, v1;
            char ch;

            // Read tag name and first attribute (if any)
            ss >> ch >> t1 >> p1 >> ch >> v1;

            // Build the full tag path
            string temp1 = "";
            if (!tag.empty()) {
                temp1 = *tag.rbegin();   // Get current tag path
                temp1 = temp1 + "." + t1; // Append current tag
            } else {
                temp1 = t1;
            }

            tag.push_back(temp1); // Push updated path

            // Store the first attribute (if any)
            m[*tag.rbegin() + "~" + p1] = v1;

            // Process remaining attributes in the same line
            while (ss >> p1 >> ch >> v1) {
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        if (m.find(quer[i]) == m.end()) {
            cout << "Not Found!\n";
        } else {
            cout << m[quer[i]] << endl;
        }
    }

    return 0;
}
