#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Inside MyClass" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
