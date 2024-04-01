#include <iostream>
using namespace std;

class Area
{
    public:
        void area(int l, int b)
        {
            cout << "Area of room: " << l * b << endl;
        }
        void vol(int l, int b, int h)
        {
            cout << "Volume of room: " << l * b * h << endl;
        }
};

int main(){
    Area a;
    int l,b,h;
    cout << "Enter l,b,h: " << endl;
    cin >> l >> b >> h;
    a.area(l,b);
    a.vol(l,b,h);
    return 0;
}