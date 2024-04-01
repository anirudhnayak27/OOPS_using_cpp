#include <iostream>
using namespace std;    

class employee{
    public:
        string ename;
        int ecode;
};

class fulltime : public employee{
    public:
        int drate,numdays;
        float salary;
        void getdata(){
            cout<<"Enter name, code, daily rate and number of days: ";
            cin>>ename>>ecode>>drate>>numdays;
            salary=drate*numdays;
        }
};

class parttime : public employee{
    public:
        int hrate,numhrs;
        float salary;
        void getdata(){
            cout<<"Enter name, code, daily rate and number of days: ";
            cin>>ename>>ecode>>hrate>>numhrs;
            salary=hrate*numhrs;
        }
};

int main(){
    fulltime f[100];
    parttime p[100];
    int n1,n2,temp1=0,temp2=0;
    while(1){
    cout<< "1.read employee details\n2.display employee details\n3.Search employee\n4.exit\n";
    int  choice;
    cout<<"Enter choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter number of full time employees: ";
            cin>>n1;
            for(int i=0;i<n1;i++){
                f[i].getdata();
            }
            cout<<"Enter number of part time employees: ";
            cin>>n2;
            for(int i=0;i<n2;i++){
                p[i].getdata();
            }
            break;
        case 2:
            cout<<"Full time employees: "<<endl;
            for(int i=0;i<n1;i++){
                cout<<f[i].ename<<" - "<<f[i].salary<<endl;
            }
            cout<<"Part time employees: "<<endl;
            for(int i=0;i<n2;i++){
                cout<<p[i].ename<<" - "<<p[i].salary<<endl;
            }
            break;
        case 3:
            cout<<"Enter employee code: ";
            int code;
            cin>>code;
            for(int i=0;i<n1;i++){
                if(f[i].ecode==code){
                    temp1=i;
                }
            }
            for(int i=0;i<n2;i++){
                if(p[i].ecode==code){
                    temp2=i;
                }
            }
            if(f[temp1].ecode==code){
                cout<<"Full time employee: "<<f[temp1].ename<<" - "<<f[temp1].salary<<endl;
            }
            else if(p[temp2].ecode==code){
                cout<<"Part time employee: "<<p[temp2].ename<<" - "<<p[temp2].salary<<endl;
            }
            else{
                cout<<"Employee not found"<<endl;
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    }
    return 0;
}