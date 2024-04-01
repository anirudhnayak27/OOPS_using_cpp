#include <iostream>
using namespace std;

class employee{
    string ename,dept;
    int ecode;
    public:
      employee(){
        ename="";
        dept="";
        ecode=0;
      }
      employee(string ename,string dept,int ecode){
        this->ename = ename;
        this->dept = dept;
        this->ecode = ecode;
      }
      void display(){
        cout << "employee name: " << ename << "\n" << "department: " << dept << "\n" << "employee code: " << ecode << endl;
      }
};

int main(){
    employee obj[100];
    int n,i,ecode;
    string ename,dept;
    cout << "Enter number of employees: " << endl;
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Enter employee's name,dept,code: ";
        cin >> ename >> dept >> ecode;
        obj[i] = employee(ename,dept,ecode);
    }
    for(i=0;i<n;i++){
        obj[i].display();
    }
    return 0;
}