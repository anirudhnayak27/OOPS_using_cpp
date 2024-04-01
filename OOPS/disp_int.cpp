//get and show any integer
#include <iostream>
using namespace std;

class integer{
    private:
    int x;
    public:
    int set(int a){
        return x=a;
    }
    int get(){
        return x;
    }
};

int main(){
    integer obj;
    obj.set(10);
    cout << "Integer: " << obj.get() <<endl;
    return 0;
}