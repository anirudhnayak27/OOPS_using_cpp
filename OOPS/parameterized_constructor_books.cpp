#include <iostream>
using namespace std;

class book{
    string title,author;
    int pyear;
    public:
      book(){
        title="";
        author="";
        pyear=0;
      }
      book(string title,string author,int year){
        this->title = title;
        this->author = author;
        pyear = year;
      }
      void display(){
        cout << "Title: " << title << "\n" << "Author: " << author << "\n" << "Publication Year: " << pyear << endl;
      }
};

int main(){
    book obj[100];
    int n,i,year;
    string title,author;
    cout << "Enter numbe of books: " << endl;
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Enter Book title,author,year: ";
        cin >> title >> author >> year;
        obj[i] = book(title,author,year);
    }
    for(i=0;i<n;i++){
        obj[i].display();
    }
    return 0;
}