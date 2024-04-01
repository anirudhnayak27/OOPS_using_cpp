#include <iostream>
using namespace std;

class Person {
    public:
        string name,address;
        int pno;   
};

class Employee : public Person {
    public:
        int eno;
        string ename;
};

class Manager : public Employee {
    public:
        string designation,deptname;
        float salary;
    public:
        void getdata(){
            cout<<"Enter details: "<<endl;
            cin>>name>>address>>pno>>eno>>ename>>designation>>deptname>>salary;
        }
};

int main(){
    Manager m[100];
    int n,temp=0;
    cout<<"Enter number of managers: ";
    cin>>n;
    for(int i=0;i<n;i++){
        m[i].getdata();
    }
    for(int i=0;i<n;i++){
        if(m[temp].salary<m[i].salary){
            temp=i;
        }
    }
    cout<<"Manager with highest salary: "<<m[temp].name<<" - "<<m[temp].salary<<endl;
    return 0;

}
