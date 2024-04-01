#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s1[] = "Hello";
    string s4 = "Hello";
    cout << s1 << endl;
    cout << "length of string is "<< strlen(s1) << endl;
    // cout << "size of string is "<< s1.size() << endl;
    char s2[] = "World";
    char s3[20];
    strcpy(s3, s1);
    cout << s3 << endl;
    strcat(s3, s2);
    cout << s3 << endl;
    cout << strcmp(s1, s2) << endl;
    reverse(s4.begin(), s4.end());
    cout << s4 << endl;
    reverse(s4.begin(), s4.end());
    cout << s4 << endl;
    return 0;
}