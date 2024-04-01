#include <iostream>
using namespace std;

class organisation{
    public:
        string orgname;
    public:
        void setOrgName(string name){
            orgname = name;
        }
        string getOrgName(){
            return orgname;
        }
};

class employee:public organisation{
    public:
        string empname;
        float salary;
    public:
        void setEmpName(string name, float sal){
            empname = name;
            salary = sal;
        }
        string getEmpName(){
            return empname;
        }
        float getSalary(){
            return salary;
        }
};

class employee_position:public employee{
    private:
        string position;
    public:
        void setempPosition(string pos){
            position = pos;
        }
        string getempPosition(){
            return position;
        }
};

int main(){
    employee_position obj;
    cout<<"Enter the organisation name: ";
    string orgname;
    cin>>orgname;
    cout<<"Enter the employee name: ";
    string empname;
    cin>>empname;
    cout<<"Enter the salary: ";
    float salary;
    cin>>salary;
    cout<<"Enter the number of employees: ";
    string post;
    cin>>post;
    obj.setOrgName(orgname);
    obj.setEmpName(empname, salary);
    obj.setempPosition(post);
    cout << "Organisation Name: " << obj.getOrgName() << endl;
    cout << "Employee Name: " << obj.getEmpName() << endl;
    cout << "Salary: " << obj.getSalary() << endl;
    cout << "Employee position: " << obj.getempPosition() << endl;
    return 0;
}