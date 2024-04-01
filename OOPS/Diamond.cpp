#include <iostream>
using namespace std;

class A{
    public:
      A(){
          cout << "Constructor of A" << endl;
      }
};

class B: public A{
    public:
      int b;
};

class C: public A{
    public:
      int c;
};

class D: public B, public C{
    public:
      int d;
};

int main(){
    D obj;
    return 0;
}