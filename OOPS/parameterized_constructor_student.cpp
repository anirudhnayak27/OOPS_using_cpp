#include <iostream>
using namespace std;

class student{
    public:
        string name;
        int rollno;
        float marks;
        student(){}
        student(string x, int y , float z){
            name = x;
            rollno = y;
            marks = z;
        }
        void diplay();
};

void student::diplay(){
    cout << "Name: " << name << "\n" << "Roll no: " << rollno << "\n" << "Marks: " << marks << endl;
}

int main(){
    student* obj = new student[100];
    int n,r;
    float m;
    string x;
    cout << "Enter number of students: ";
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cout << "Enter name, roll number and marks: ";
        cin >> x >> r >> m;
        obj[i] = student(x,r,m);
    }
    for(i=0;i<n;i++){
        obj[i].diplay();
    }
}