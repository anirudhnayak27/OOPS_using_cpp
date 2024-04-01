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

// Derived class 2 (inherits from Shape)
class Rectangle : public Shape {
public:
    void draw() {
         cout << "Inside Rectangle class" <<  endl;
    }
};

int main() {
    Circle circle;
    circle.display();  // Accessing the base class member function
    circle.show();     // Accessing the first derived class member function

    Rectangle rectangle;
    rectangle.display();  // Accessing the base class member function
    rectangle.draw();     // Accessing the second derived class member function

    return 0;
}
