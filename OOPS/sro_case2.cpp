#include <iostream>
using namespace std;

class a{
    public: 
       void func();
};

void a::func(){
    cout << "Hello" << endl;
}

int main(){
    a a;
    a.func();
    return 0;
}