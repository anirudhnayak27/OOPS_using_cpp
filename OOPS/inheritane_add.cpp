#include <iostream>
using namespace std;

class base{
    protected:
        int a,b;
    public:
        base(int x, int y):a(x),b(y){}
        int geta(){
            return a;
        }
        int getb(){
            return b;
        }
};

class add: public base{
    public:
        add(int x, int y):base(x,y){}
        int getsum(){
            return geta()+getb();
        }
};

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add obj(a,b);
    cout << obj.getsum() << endl;
    return 0;
}