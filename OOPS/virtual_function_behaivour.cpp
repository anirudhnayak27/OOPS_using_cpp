#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "Created base class"<< endl;
    }
    void print(){
        cout << "Base class" << endl; 
    }
};

class derived:public Base{
    public:
    void display(){
        cout << "Create derived class" << endl;
    }
    void print(){
        cout << "derived class" << endl;
    }
};


int main()
{
    Base *bptr;
    derived dev;
    bptr = &dev;
    bptr->display(); 
    bptr->print(); 
    return 0;

}
