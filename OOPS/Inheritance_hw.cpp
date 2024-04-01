#include <iostream>
using namespace std;

class subject{
    protected:
        float marks;
    public:
        subject(float m):marks(m){}
        float getmarks(){
            return marks;
        }
};

class CMOS: public subject{
     public:
        CMOS(float m):subject(m){}
};

class OSED: public subject{
     public:
        OSED(float m):subject(m){}
};

class CS: public subject{
     public:
        CS(float m):subject(m){}
};

class Average: public CMOS, public OSED, public CS{
    public:
        Average(float m1, float m2, float m3):CMOS(m1),OSED(m2),CS(m3){}
        float  getAverage(){
            return (CMOS::getmarks()+OSED::getmarks()+CS::getmarks())/3;
        }
};

int main(){
    Average obj(35,32,40);
    cout << obj.getAverage() << endl;
    return 0;
}