#include <iostream>
#include <math.h>
using namespace std;

class shape{
    protected:
        int width, height;
    public:
        void set_values(int a, int b){
            width = a;
            height = b;
        }
};

class rectangle: public shape{
    public:
        int area(){
            return width * height;
        }
};

class triangle: public shape{
    public:
        int area(){
            return width * height / 2;
        }
};

class circle: public shape{
    public:
        int area(){
            return width * width * M_PI;
        }
};

int main(){
    rectangle obj;
    triangle obj1;
    circle obj2;
    int a, b;
    cout << "Enter width and height:  ";
    cin >> a >> b;
    obj.set_values(a, b);
    obj1.set_values(a, b);
    obj2.set_values(a, b);
    cout << "Area of rectangle: " << obj.area() << endl;
    cout << "Area of triangle: " << obj1.area() << endl;
    cout << "Area of circle:  " << obj2.area() << endl;
    return 0;
}
