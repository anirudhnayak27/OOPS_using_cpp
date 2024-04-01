#include <iostream>
using namespace std;

class vehicle{
    public:
        vehicle()
        {
            cout << "This is vehicle!" << endl;
        }
};

class fourWheeler:vehicle{
    public:
        fourWheeler(){
            cout << "This is four wheeler!" << endl;
        }
};

class car:fourWheeler
{
};

int main()
{
    car obj;
    return 0;
}