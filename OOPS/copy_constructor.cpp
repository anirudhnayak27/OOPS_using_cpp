#include <iostream>
using namespace std;

class Sample{
    private:
         int n;
    public:
        Sample(){
            n = 0;
        }
        Sample(int x){
            n = x;
        }
        Sample(Sample &s){
           this-> n = s.n;
        }
        void display(){
            cout << "n = " << n << endl;
        }
};

int main(){
    Sample a(10);
    Sample b(a);
    Sample c=a;
    a.display();
    b.display();
    c.display();
    return 0;

}