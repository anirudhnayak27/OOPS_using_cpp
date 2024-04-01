#include <iostream>
using namespace std;

class a{
    private:
    int len,b;
    public:
    int setlength(int l){
        return len =l;
    }
    int setbreadth(int br){
       return b=br;
    }
    int getarea(){
        return len*b;
    }
    int getpreimeter(){
        return 2*(len+b);
    }
};

int main(){
    a obj;
    obj.setlength(10);
    obj.setbreadth(20);
    cout << "Area: " << obj.getarea() << endl;
    cout << "Perimeter: " << obj.getpreimeter() << endl;
    return 0;
}