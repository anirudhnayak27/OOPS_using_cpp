#include <iostream>
using namespace std;

class shape{
    public:
    virtual float area() = 0;
};

class square: public shape{
    private:
    float side;
    public:
    square(float s){
        side = s;
    }
    float area(){
        return side*side;
    }
};

class circle: public shape{
    private:
    float radius;
    public:
    circle(float r){
        radius = r;
    }
    float area(){
        return 3.14*radius*radius;
    }
};

class rectangle: public shape{
    private:
    float length;
    float breadth;
    public:
    rectangle(float l, float b){
        length = l;
        breadth = b;
    }
    float area(){
        return length*breadth;
    }
};

int main(){
    shape *s;
    square sq(3.4);
    circle c(2.14);
    rectangle r(2,3);
    s = &sq;
    cout << "Area of square: " << int(s->area()) << endl;
    s = &c;
    cout << "Area of circle: " << int(s->area()) << endl;
    s = &r;
    cout << "Area of rectangle: " << int(s->area()) << endl;
    return 0;
}
