#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &value = a;
    int b = a;
    cout << a << endl;
    cout << value << endl;
    cout << b << endl;
    return 0;
}