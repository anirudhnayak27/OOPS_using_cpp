#include <iostream>
using namespace std;
class MyClass {
public:
    static int count;  // Static member variable
    MyClass() {
        count++;
    }
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;
    MyClass::showCount();
    return 0;
}
