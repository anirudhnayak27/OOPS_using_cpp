#include <iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    float salary;
    employee(int id,string name,float salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display(){
        cout << id << " " << name << " " << salary <<endl;
    }
};

int main(){
    employee o1 =employee(1,"xv",234);
    employee o2 = employee(2,"xc",3456);
    o1.display();
    o2.display();
    return 0;
}