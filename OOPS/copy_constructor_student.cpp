#include <iostream>
#include <string>
using namespace std;

class student{
    int rno;
    string name;
    double fee;
    public:
       student(int,string,double);
       student(student &obj){
        rno = obj.rno;
        name = obj.name;
        fee = obj.fee;
       }
       void display();
};

void student :: display(){
    cout << rno <<"-"<< name <<"-"<< fee << endl;
}

student :: student (int a, string b, double c){
    rno = a;
    name = b;
    fee = c;
}

int main(){
    student s(100,"xyz",100000);
    s.display();
    student xyz(s);
    xyz.display();
    return 0;
}