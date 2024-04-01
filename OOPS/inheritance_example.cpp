#include <iostream>
using namespace std;

class student{
    protected:
        int roll;
        int sub1,sub2;
    public:
        student(int r, int s1, int s2):roll(r),sub1(s1),sub2(s2){}
        int getroll(){
            return roll;
        }
        int getsub1(){
            return sub1;
        }
        int getsub2(){
            return sub2;
        }
};

class project{
    protected:
        int marks;
    public:
        project(int m):marks(m){}
        int getmarks(){
            return marks;
        }
};

class result: public student, public project{
    public:
        result(int r, int s1, int s2, int m):student(r,s1,s2),project(m){}
        int gettotal(){
            return getsub1()+getsub2()+getmarks();
        }
        int getavg(){
            return gettotal()/3;
        }
        void display(){
            cout<<"Total: "<<gettotal()<<endl;
            cout<<"Average: "<<getavg()<<endl;
        }
};

int main(){
    int r,s1,s2,p;
    cout<<"Enter roll number: ";
    cin>>r;
    cout<<"Enter marks of subjects: ";
    cin>>s1>>s2;
    cout<<"Enter marks of project: ";
    cin>>p;
    result obj(r,s1,s2,p);
    obj.display();
    return 0;
}