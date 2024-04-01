#include <iostream>
using namespace std;

class a {
    public:
    class b{
        private:
        int num;
        public:
        void get_data(int n){
            num=n;
        }
        void put_data(){
            cout << "number: " << num << endl;
        }
    };
};

int main(){
    cout << "Nested class " << endl;
    a::b obj;
    obj.get_data(10);
    obj.put_data();
    return 0;
}