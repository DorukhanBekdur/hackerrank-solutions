// Language: C++
// Category: C++ > Classes
// Problem: Class
// Author: Dorukhan Bekdur

#include <iostream>
#include <string>
using namespace std;

// Define Student class
class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Setters
    void set_age(int a) {
        age = a;
    }

    void set_first_name(string fn) {
        first_name = fn;
    }

    void set_last_name(string ln) {
        last_name = ln;
    }

    void set_standard(int std) {
        standard = std;
    }

    // Getters
    int get_age() {
        return age;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    int get_standard() {
        return standard;
    }

    // to_string function
    string to_string() {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    // Input
    cin >> age >> first_name >> last_name >> standard;

    // Create object and set data
    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    // Output
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    cout << st.to_string() << endl;

    return 0;
}
