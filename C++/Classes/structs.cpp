// Language: C++
// Category: C++ > Classes (Easy)
// Problem: Structs
// Author: Dorukhan Bekdur

#include <iostream>
#include <string>
using namespace std;

// Define the Student struct
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;

    // Read data from user
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;

    // Print data in required format
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << endl;

    return 0;
}
