#include <iostream>
using namespace std;    

// Base class
class Shape {
public:
    void display() {
         cout << "Inside Shape class" <<  endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void show() {
         cout << "Inside Circle class" <<  endl;
    }
};

int main() {
    Circle circle;
    circle.display();  // Accessing the base class member function
    circle.show();     // Accessing the derived class member function
    return 0;
}
