#include <iostream>
using namespace std;

int main(){
    double num,dem,arr[4]={0.0,0.0,0.0,0.0};
    int inx;
    int results;
    cout << "Enter array index: ";
    cin >> inx;
    try{
        if(inx < 0 || inx > 3){
            throw "Out of bounds!";
        }
    cout << "Enter numerator and denominator: ";
    cin >> num >> dem;
    if(dem == 0){
        throw 0;
     }
    arr[inx] = num/dem;
    cout << arr[inx] << endl;
    }
    catch(const char* msg){
        cerr << msg << endl;
    }
    catch(int x){
        cerr << "Division by zero condition!" << endl;
    }
    catch(...){
        cerr << "Unknown exception!" << endl;
    }
    return 0;
}
