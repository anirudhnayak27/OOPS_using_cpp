#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "Created base class"<< endl;
    }
};

class B:public A{
    public:
    virtual void display(){
        cout << "Create derived class" << endl;
    }
};



int main()
{
    A *a;
    B b;
    a = &b;
    a->display();
    b.display(); 
    return 0;

}
