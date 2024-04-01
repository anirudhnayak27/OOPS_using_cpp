#include <iostream>
using namespace std;

float absolute(float val){
    if(val < 0){
        val = -val;
    }
    return val;
}

int absolute(int val){
    if(val < 0){
        val = -val;
    }
    return val;
}

int main(){
    cout << absolute(-5) << endl;
    cout << absolute(5.67f) << endl;
    return 0;
}