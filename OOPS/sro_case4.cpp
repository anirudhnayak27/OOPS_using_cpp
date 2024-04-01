#include <iostream>
using namespace std;

class a{
    protected:
    int x;
    public:
     a(){
        x=10;
     }
};

class b{
    protected:
    int x;
    public:
     b(){
        x=20;
     }
};

class c: public a,public b{
    public:
     void func(){
        cout << "A's x: " << a::x << endl;
        cout << "B's x: " << b::x << endl;
        }
};

int main(){
    c c;
    c.func();
    return 0;
}