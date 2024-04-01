#include <iostream>
using namespace std;

template <typename T>

T add(T num1, T num2){
    return num1+num2;
}

int main(){
    cout << add<int>(2,1) << endl;
    cout << add<double>(2.3,4.3) << endl;
    cout << add<float>(2.1,3.2) << endl;
    return 0;
}