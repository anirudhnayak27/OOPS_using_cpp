#include <iostream>
using namespace std;

int p;

int main(){
    int p=10;
    cout << "Global: " << ::p << endl;
    cout << "Local: " << p;
    return 0; 
}