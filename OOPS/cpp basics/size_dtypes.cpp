#include <iostream>
using namespace std;
int main(){
    int a=1;
    char b='a';
    float c=5.5;
    double d=65.234123;
    string e="H";
    bool f=true;
    cout << "Size of int is " << sizeof(a) << endl;
    cout << "Size of char is " << sizeof(b) << endl;
    cout << "Size of float is " << sizeof(c) << endl;
    cout << "Size of double is " << sizeof(d) << endl;
    cout << "Size of string is " << sizeof(e) << endl;
    cout << "Size of bool is " << sizeof(f) << endl;
    return 0;
}