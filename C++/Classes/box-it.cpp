// Language: C++
// Category: C++ > Classes (Medium)
// Problem: Box It!
// Author: Dorukhan Bekdur

#include <iostream>
using namespace std;

class Box {
private:
    int l, b, h; // length, breadth, height

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // Copy constructor
    Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

    // Getters
    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }

    // Calculate volume
    long long CalculateVolume() const {
        return static_cast<long long>(l) * b * h;
    }

    // Overload < operator
    bool operator<(const Box& other) const {
        if (l < other.l) return true;
        if (l == other.l && b < other.b) return true;
        if (l == other.l && b == other.b && h < other.h) return true;
        return false;
    }

    // Friend function to overload << operator
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};
