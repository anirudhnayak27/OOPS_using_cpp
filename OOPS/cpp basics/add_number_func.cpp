#include <iostream>
using namespace std;
void add(int a, int b){
    cout << "Sum of " << a << " and " << b << " is " << a+b << endl;
}

void main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add(a,b);
}