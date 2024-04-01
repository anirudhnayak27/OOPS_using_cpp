#include <iostream>
using namespace std;

class student{
    public:
        double marks;
        student(double marks){
            marks = marks;
        }
};

void calcavg(student s1, student s2){
    double avg = (s1.marks + s2.marks)/2;
    cout << "Average marks: " << avg << endl;
}

int main(){
    student s1(45.5), s2(55.5);
    calcavg(s1, s2);
    return 0;
}