#include <iostream>
using namespace std;
class Myclass{
    public:
        void add(int a, int b){
            cout << "Sum of " << a << " and " << b << " is " << a+b << endl;
        }
        int mynum;
        string mystring;
};

int main(){
    Myclass obj;
    Myclass obj1; 
    int a,b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // obj.add(a,b);
    obj.mynum=10;
    obj.mystring="Hello";
    cout << obj.mynum << endl;
    cout << obj.mystring << endl; 
    obj1.mynum=20;
    obj1.mystring="World";
    cout << obj1.mynum << endl;
    cout << obj1.mystring << endl;
    return 0;

}