#include <iostream>
using namespace std;

class employee{
    public:
    void print(int id,string name,int HW,int salary){
            cout << "ID: " << id <<endl;
            cout << "Name: " << name <<endl;
            cout << "Hours worked: " << HW <<endl;
            cout << "Salary: " << salary << endl;
            cout << "ITI deduction: " <<  salary*0.05 <<endl;
    }
};

int main(){
    int id[5]={1,2,3,4,5};
    string name[5]={"Employee1","Employee2","Employee3","Employee4","Employee5"};
    int HW[5]={8,8,8,8,8};
    int salary[5]={10000,20000,10000,10000,9000};
    employee obj;
    for(int i=0;i<5;i++){
        obj.print(id[i],name[i],HW[i],salary[i]);
    }
    return 0;
}