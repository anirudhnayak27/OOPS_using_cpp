#include <iostream>
using namespace std;

class square{
    public:
        double x;
        square(double x){
            this->x = x;
        }
};

void calcsquare(square obj){
    double square = obj.x * obj.x;
    cout << "square: " << square << endl;
}

int main(){
    square obj(5.5);
    calcsquare(obj);
    return 0;
}