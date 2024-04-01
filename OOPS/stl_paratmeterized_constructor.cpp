#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Professor{
    public:
       int id;
       string name;
       float salary;
    Professor(int i,string n, float s) : id(i),name(n),salary(s){}
    void display(){
        cout << "ID: " << id << "\n" << "Name: " << name << "\n" << "Salary" << salary <<endl;
    }
};

int main(){
    int n,id;
    float salary;
    string name;
    cout << "Enter number of professors:  ";
    cin >> n;
    vector<Professor> prof;
    for(int i=0;i<n;i++){
        cout << "Enter details of professor " << i+1 <<endl;
        cout << "ID: ";
        cin>>id;
        cout << "Name: ";
        cin.ignore();
        getline(cin,name);
        cout << "Salary: ";
        cin >> salary;
        
        prof.push_back(Professor(id,name,salary));
    }
    for(size_t i=0;i<prof.size();i++){
        cout << "Details of Professor " << i+1 << endl;
        prof[i].display();
    }
    return 0;
}