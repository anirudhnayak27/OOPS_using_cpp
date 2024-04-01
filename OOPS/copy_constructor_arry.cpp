#include <iostream>
using namespace std;

class intarry{
    int  *arr;
    int size;
    public:
       intarry():arr(NULL),size(0){}

       intarry(int arrsize) : size(arrsize){
        if(size>0){
            arr = new int (size);
            for(int i=0;i<size;i++){
                arr[i]=i;
            }
        }
        else{
            arr = NULL;
        }
       }
       intarry(intarry &obj) : size(obj.size){
        if(obj.arr != NULL){
            arr = new int(size);
            for(int i=0;i<size;i++){
                arr[i] = obj.arr[i];
            }
        }
        else{
            arr = NULL;
        }
       }
       void display(){
        if(arr != NULL){
           cout << "Array elements: ";
           for(int i=0;i<size;i++){
            cout << arr[i] << " ";
           }
           cout << endl;
        }
       }
       ~intarry(){
        delete(arr);
       }
};

int main(){
    intarry arr(5);
    cout << "Array: " << endl;
    arr.display();
    
    intarry arr1 =arr ;
    cout << "Array: " << endl;
    arr1.display();

    return 0;
}