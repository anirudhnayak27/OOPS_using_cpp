// write cpp to demonstrate the working of data encaptionlation (data hiding) for data members name,ID,salary
#include <iostream>
using namespace std;

class employee{
    private:
    string name;
    int id,salary;
    public:
    int setid(int a){
        return id=a;
    }
    int setsalary(int b){
        return salary=b;
    }
    string setname(string c){
        return name=c;
    }
    void getid(){
        cout << "employee id: " << id <<endl;
    }
    void getsalay(){
        cout << "employee salary: " << salary <<endl;
    }
    void getname(){
        cout << "employee name: " << name << endl;
    }
};

int main(){
    employee obj;
    string name="Anirudh";
    obj.setid(101);
    obj.setsalary(20000);
    obj.setname(name);
    obj.getid();
    obj.getname();
    obj.getsalay();
    return 0;
}
