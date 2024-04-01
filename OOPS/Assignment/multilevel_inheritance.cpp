#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    void display() {
         cout << "Inside Shape class" <<  endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void show() {
         cout << "Inside Circle class" <<  endl;
    }
};

// Derived class 2 (inherits from Circle)
class Cylinder : public Circle {
public:
    void volume() {
         cout << "Inside Cylinder class" <<  endl;
    }
};

int main() {
    Cylinder cylinder;
    cylinder.display();  // Accessing the base class member function
    cylinder.show();     // Accessing the first derived class member function
    cylinder.volume();    // Accessing the second derived class member function
    return 0;
}
