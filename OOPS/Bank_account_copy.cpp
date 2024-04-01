#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    BankAccount(const BankAccount &obj)
    {
        accountNumber = obj.accountNumber;
        balance = obj.balance;
    }
    void show()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    int accnum, bal;
    cout << "Enter Account Number: ";
    cin >> accnum;
    cout << "Enter Balance: ";
    cin >> bal;
    BankAccount account1(accnum, bal);
    BankAccount account2 = account1;
    account1.show();
    account2.show();
    return 0;
}