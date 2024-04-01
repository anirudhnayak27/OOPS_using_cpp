#include <iostream>
using namespace std;

class student{
    public:
        string name;
        int rollno;
        student(){
            cout << "Enter name and roll number: ";
            cin >> name >> rollno;
        }
};

int main(){
    student obj;
    cout << "Name: " << obj.name << "\n" << "Roll no: " << obj.rollno << endl;
    return 0;
}