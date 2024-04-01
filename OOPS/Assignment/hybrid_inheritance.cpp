#include <iostream>
using namespace std;

// Base class 1
class Shape {
public:
    void display() {
        cout << "Inside Shape class" << endl;
    }
};

// Base class 2
class Color {
public:
    void showColor() {
        cout << "Inside Color class" << endl;
    }
};

// Derived class (inherits from Shape and Color)
class Square : public Shape, public Color {
public:
    void draw() {
         cout << "Inside Square class" <<  endl;
    }
};

// Another class (inherits from Square)
class ColoredSquare : public Square {
public:
    void showDetails() {
        display();    // Accessing the member function from the first base class
        showColor();  // Accessing the member function from the second base class
        draw();       // Accessing the member function from the derived class
    }
};

int main() {
    ColoredSquare coloredSquare;
    coloredSquare.showDetails();

    return 0;
}
