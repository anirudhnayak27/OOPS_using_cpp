#include <iostream>
using namespace std;
int main(){
    int a,b;
    int n;
    cout << "Enter loop num:\n" ;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "Enter numbers:\n";
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}
