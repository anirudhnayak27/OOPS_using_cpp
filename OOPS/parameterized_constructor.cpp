#include <iostream>
using namespace std;

class rectangle{
    public:
        int l,b;
        rectangle(int x, int y){
            l = x;
            b = y;
        }
        int area(){
            return l*b;
        }
};
class item{
    public:
        int m,n;
        item(int a, int b){
            m = a;
            n = b;
        }
        void put();
};

void item::put(){
    cout << "m = " << m << "\n" << "n = " << n << endl;
}

int main(){
    item obj(10,20);
    item obj1 = item(30,40);
    rectangle obj2(10,20);
    cout << "Area of rectangle: " << obj2.area() << endl;
    obj.put();
    obj1.put(); 
    return 0;
}