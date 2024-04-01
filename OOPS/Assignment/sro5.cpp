#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Inside BaseClass" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        Base::display(); 
        cout << "Inside DerivedClass" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); 
    return 0;
}
