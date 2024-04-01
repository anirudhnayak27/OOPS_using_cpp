#include <iostream>
using namespace std;
int num = 10;  // Global variable

class MyClass {
public:
    int num = 5;  // Member variable
    void display() {
       cout << "Member variable: " << this->num << endl;
        cout << "Global variable: " << ::num << endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
