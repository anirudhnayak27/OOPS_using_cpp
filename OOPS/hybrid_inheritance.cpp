#include <iostream>
using namespace std;

class vehicle{
    public:
        vehicle(){
            cout << "This is a vehicle" << endl;
        }
};

class Fare{
    public:
        Fare(){
            cout << "Fare of vehicle" << endl;
        }
};

class car: vehicle{};
class bus: vehicle,Fare{};

int main(){
    bus obj;
    return 0;
}