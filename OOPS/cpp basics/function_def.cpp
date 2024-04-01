#include <iostream>
using namespace std;

class myclass{
   public:
   int data = 5;
   void printdata(){
    cout << "data: " << data <<endl;
   }
};

class urclass{
    public:
    int data = 5;
    void printdata();
};

void urclass::printdata(){
    cout << "Data: " << data << endl;
}

int main(){
    myclass obj;
    obj.printdata();
    urclass obj1;
    obj1.printdata();
    return 0;
}