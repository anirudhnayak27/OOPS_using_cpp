#include <iostream>
using namespace std;

class vehicle
{   public:
    vehicle()
    {
        cout<<"This is a vheicle"<<endl;
    }
};

class car: vehicle{};
class bus: vehicle{};

int main()
{
    car c;
    bus b;
    return 0;
}
