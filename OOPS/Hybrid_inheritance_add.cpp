#include <iostream>
using namespace std;
class A
{
public:
    int num1;
};

class B: public A{
    public:
      void getdata()
      {
          cout << "Enter 1st numbers: ";
          cin >> num1;
      }
};

class C 
{
protected:
    int num2;
public:
    void getdata2()
    {
        cout << "Enter 2nd numbers: ";
        cin >> num2;
    }
};
class D : public B, public C
{
protected:
    int sum;
public:

    void add()
    {
        sum = num1+num2;
    }
    void show()
    {
        cout << "Sum = " << sum << endl;
    }
};
int main()
{
    D obj;
    obj.getdata();
    obj.getdata2();
    obj.add();
    obj.show();
    return 0;
}


