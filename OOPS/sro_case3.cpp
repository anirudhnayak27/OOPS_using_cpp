#include <iostream>
using namespace std;

class a{
    static int x;
    public:
      static int y;
      void func(int x){
        cout << "Static: " << a::x << endl;
        cout << "Local: " << x << endl;
      }
};

int a::x=1;
int a::y=2;

int main(){
    a obj;
    int x=10;
    obj.func(x);
    cout << "a::y= " << a::y << endl;
    return 0;
}