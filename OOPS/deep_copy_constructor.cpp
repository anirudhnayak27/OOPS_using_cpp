#include <iostream>
using namespace std;

class demo{
    int a,b,*p;
    public:
    demo(){
    p = new int;
    }
    demo(demo &d){
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }
    void setdata(int x,int y,int z){
        a=x;
        b=y;
        *p =z;
    }
    void showdata(){
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "p: " << *p << endl;
    }
};

int main(){
    demo d;
    d.setdata(3,4,5);
    demo d1=d;
    d1.showdata();
    return 0;
}