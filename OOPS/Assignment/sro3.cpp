#include <iostream>
using namespace std;
class OuterClass {
public:
    static constexpr int x = 10;
    
    class InnerClass {
    public:
        void display() {
            cout << "InnerClass: " << x << endl;
        }
    };
};

int main() {
    OuterClass::InnerClass inner;
    inner.display();
    return 0;
}
