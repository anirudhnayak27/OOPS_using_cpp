#include <iostream>
#include <vector>
using namespace std;

class patient{
    public:
       string name,condition;
       int pid,roomno;
       void getdata(){
           cout<<"Enter patient name, condition, patient id and room number: ";
           cin>>name>>condition>>pid>>roomno;
       }
};

int main(){
    int n,id;
    vector<patient> p;
    while(1){
        cout<<"1.Enter details\n2.Display details\n3.Search\n4.Exit\n";
        int choice;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter number of patients: ";
                cin>>n;
                for(int i=0;i<n;i++){
                    patient temp;
                    temp.getdata();
                    p.push_back(temp);
                }
                break;
            case 2:
                for(int i=0;i<n;i++){
                    cout<<p[i].name<<" - "<<p[i].condition<<" - "<<p[i].pid<<" - "<<p[i].roomno<<endl;
                }
                break;
            case 3:
                cout<<"Enter patient id: ";
                cin>>id;
                for(int i=0;i<n;i++){
                    if(p[i].pid==id){
                        cout<<p[i].name<<" - "<<p[i].condition<<" - "<<p[i].pid<<" - "<<p[i].roomno<<endl;
                    }
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