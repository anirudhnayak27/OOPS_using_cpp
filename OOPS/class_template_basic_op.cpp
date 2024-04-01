#include <iostream>
#include <string>
using namespace std;

template <class T>
class calculator {
    T num1;
    T num2;
    public:
      calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
      }
      string display(){
        string results;
        results = "num1: " + to_string(num1) + " num2: " + to_string(num2) + "\n";
        results += to_string(num1) + " + " + to_string(num2)+ " = " + to_string(add())+"\n";
        results += to_string(num1) + " - " + to_string(num2)+ " = " + to_string(sub())+"\n";
        results += to_string(num1) + " * " + to_string(num2)+ " = " + to_string(mul())+"\n";
        results += to_string(num1) + " / " + to_string(num2)+ " = " + to_string(div())+"\n";
        return results;
      }
      T add(){return num1+num2;}
      T sub(){return num1-num2;}
      T mul(){return num1*num2;}
      T div(){return num1/num2;}
};

int main(){
    calculator <int> intcal(2,1);
    calculator <float> floatcal (2.1,3.2);
    cout << intcal.display() << endl;
    cout << floatcal.display() << endl;

    return 0;
}