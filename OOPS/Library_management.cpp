#include <iostream>
#include <vector>
using namespace std;

class library{
    public:
        string title,author,section;
        int year;
};

class book : public library{
    public:
        int pages;
        void getdata(){
            cout<<"Enter title, author, section, year and number of pages: ";
            cin>>title>>author>>section>>year>>pages;
        }
};

class magazine : public library{
    public:
        int issue;
        void getdata(){
            cout<<"Enter title, author, section, year and issue number: ";
            cin>>title>>author>>section>>year>>issue;
        }
};

int main(){
    int n1,n2,temp1=0,temp2=0;
    string search_title;
    vector<book> b;
    vector<magazine> m;
    while(1){
        cout<<"1.Enter book details\n2.Enter magazine details\n3.Display book details\n4.Display magazine details\n5.Search book\n6.Search magazine\n7.Exit\n";
        int choice;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter number of books: ";
                cin>>n1;
                for(int i=0;i<n1;i++){
                    book temp;
                    temp.getdata();
                    b.push_back(temp);
                }
                break;
            case 2:
                cout<<"Enter number of magazines: ";
                cin>>n2;
                for(int i=0;i<n2;i++){
                    magazine temp;
                    temp.getdata();
                    m.push_back(temp);
                }
                break;
            case 3:
                for(int i=0;i<n1;i++){
                    cout<<b[i].title<<" - "<<b[i].author<<" - "<<b[i].section<<" - "<<b[i].year<<" - "<<b[i].pages<<endl;
                }
                break;
            case 4:
                for(int i=0;i<n2;i++){
                    cout<<m[i].title<<" - "<<m[i].author<<" - "<<m[i].section<<" - "<<m[i].year<<" - "<<m[i].issue<<endl;
                }
                break;
            case 5:
                cout<<"Enter title to search: ";
                cin>>search_title;
                for(int i=0;i<n1;i++){
                    if(b[i].title==search_title){
                        cout<<b[i].title<<" - "<<b[i].author<<" - "<<b[i].section<<" - "<<b[i].year<<" - "<<b[i].pages<<endl;
                        temp1=1;
                    }
                }
                if(temp1==0){
                    cout<<"Book not found"<<endl;
                }
                break;
            case 6:
                cout<<"Enter title to search: ";
                cin>>search_title;
                for(int i=0;i<n2;i++){
                    if(m[i].title==search_title){
                        cout<<m[i].title<<" - "<<m[i].author<<" - "<<m[i].section<<" - "<<m[i].year<<" - "<<m[i].issue<<endl;
                        temp2=1;
                    }
                }
                if(temp2==0){
                    cout<<"Magazine not found"<<endl;
                }
                break;
            case 7:
                exit(0);
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break; 
        }
    }
}