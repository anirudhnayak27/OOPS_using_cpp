#include <iostream>
using namespace std;

class parent{
    protected: int id_p;
};

class child: protected parent{
    public: int id_c;
    // child class can access id_p
    int get_id_p(){
        cout << "Enter id of parent:  ";
        cin >> id_p;
        return id_p;
    }
};

int main(){
    child obj;
    cout << "Enter id of child:  ";
    cin >> obj.id_c ;
    cout << "Child id is " << obj.id_c << endl;
    int idp = obj.get_id_p();
    cout << "Parent id is " << idp<< endl;
    return 0;
}