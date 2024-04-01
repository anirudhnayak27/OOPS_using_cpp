#include <iostream>
using namespace std;

// shallow copy: the default copy constructor can only produce shallow copy.
// A shallow copy is defined as process of creating copy of an object by copying data of all member varaibles as its.

/*Deep copy
It dyanmically allocates memory for copy then copies the actual value, both source and copy have distinct memory locations.
In this way, both src and copy are distinct and will not share same memory location.
deep copy requires us to write user defined constructor.
*/

class demo{
    int a,b,*p;
    public:
    demo(){
    p = new int;
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