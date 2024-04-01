//cpp for constructor and destructor
#include <iostream>
using namespace std;

class integer{
    private:
    int x;
    public:
    integer(int a){
        x=a;
    }
    ~integer(){
        cout << "Destructor called" << endl;
    }
    int get(){
        return x;
    }
};

int main(){
    integer obj(10);
    cout << "Integer: " << obj.get() <<endl;
    return 0;
}