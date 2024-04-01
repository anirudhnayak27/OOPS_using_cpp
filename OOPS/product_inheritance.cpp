#include <iostream>
using namespace std;

class Product {
    public:
        int product_no,product_name;
        float price;
};

class discount : public Product {
    public:
        float discounted_price;
        void getdiscountedprice(int discount){
            discounted_price = price - (price * discount / 100);
        }
};

int main(){
    discount d[20];
    int n,i,choice;
    float total=0,discount;
    while(1){
        cout << "1. Read product details\n2. Display product details\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter number of products: ";
                cin >> n;
                for(i=0;i<n;i++){
                    cout << "Enter product number, name and price: ";
                    cin >> d[i].product_no >> d[i].product_name >> d[i].price >> discount;
                    d[i].getdiscountedprice(discount);
                }
                break;
            case 2:
                cout << "Product details: " << endl;
                for(i=0;i<n;i++){
                    cout << d[i].product_no << " - " << d[i].product_name << " - " << d[i].discounted_price << endl;
                    total+=d[i].discounted_price;
                }
                cout << "Total price: " << total << endl;
                break;
            case 3:
                exit(0);break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }

    return 0;
}