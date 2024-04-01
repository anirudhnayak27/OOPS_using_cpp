#include <iostream>
using namespace std;

class A{
    public:
        static int x;
        static int increment(){
            return ++x;
        }
};

int A::x = 0;

int main(){
    A obj;
    for (int i=0;i<3;i++){
        cout << obj.increment() << endl;
    } 
    A::x++;
    cout << A::x << endl;
    return 0; 
}