#include <iostream>
using namespace std;

double division(int a, int b){
    if( b == 0 ){
        throw "Division by zero condition!";
    }
    return (a/b);
}

int main(){
    int x,y;
    cout << "Enter x and y: ";
    cin  >> x >> y;
    double z = 0;
    try{
        z = division(x,y);
        cout << z << endl;
    }catch(...){
        cerr << "Division by zero condition!" << endl;
    }
    return 0;
}