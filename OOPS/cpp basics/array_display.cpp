#include <iostream>
using namespace std;

class student{
    public:
    void print(int roll,string name,string grade){
            cout<<"Roll: " << roll <<endl;
            cout<<"Name: " << name <<endl;
            cout<<"Grade: " << grade <<endl;
    }
};

int main(){
     //array of 5 students
    int roll[5]={1,2,3,4,5};
    string name[5]={"Student1","Student2","Student3","Student4","Student5"};
    string grade[5]={"A","B","C","D","E"};
    student obj;
    for(int i=0;i<5;i++){
        obj.print(roll[i],name[i],grade[i]);
    }
    return 0;
}