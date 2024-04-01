#include <iostream>
using namespace std;

class animal{
    public:
        void eat(){
            cout << "eats food!" << endl;
        }
        void sleep(){
            cout << "sleeps!" << endl;
        }
};

class mammal{
    public:
        void warm(){
            cout << "warm blooded!" << endl;
        }
};

class dog: public animal, public mammal{
    public:
        void bark(){
            cout << "bark!" << endl;
        }
};

int main(){
    dog obj;
    obj.eat();
    obj.sleep();
    obj.bark();
    obj.warm();
    return 0;
}