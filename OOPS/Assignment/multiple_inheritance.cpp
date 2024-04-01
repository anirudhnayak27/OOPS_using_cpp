#include <iostream>
using namespace std;    
// Base class 1
class Base1 {
public:
    void displayBase1() {
         cout << "Inside Base1 class" <<  endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
         cout << "Inside Base2 class" <<  endl;
    }
};

// Derived class inheriting from multiple base classes
class Derived : public Base1, public Base2 {
public:
    void show() {
         cout << "Inside Derived class" <<  endl;
    }
};

int main() {
    Derived derived;
    derived.displayBase1();
    derived.displayBase2();
    derived.show();
    return 0;
}
