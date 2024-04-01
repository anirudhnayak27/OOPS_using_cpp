#include <iostream>
#include <string.h>
using namespace std;
void rev(string s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        swap(s[i], s[n-i-1]);
    }
    cout << s << endl;
}
void rev_rec(string s){
    if(s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    rev_rec(ros);
    cout << s[0];
}
int main(){
    string s1 = "Hello";
    cout << s1 << endl;
    rev(s1);
    rev_rec(s1);
    return 0;
}