#include <iostream>
#include <stdexcept>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {
        if (initialBalance < 0.0) {
            throw invalid_argument("Initial balance cannot be less than 0");
        }
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount < 0.0) {
            throw invalid_argument("Deposit amount cannot be less than 0");
        }
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount < 0.0) {
            throw invalid_argument("Withdrawal amount cannot be less than 0");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient funds for withdrawal");
        }
        balance -= amount;
    }
};

int main() {
    try {
        string name;
        double initialBalance;
        double depositAmount;
        double withdrawalAmount;

        cin >> name >> initialBalance >> depositAmount >> withdrawalAmount;

        BankAccount myAccount(name, initialBalance);

        cout << "Initial Balance: " << myAccount.getBalance() << endl;

        myAccount.deposit(depositAmount);
        cout << "After Deposit: " << myAccount.getBalance() << endl;

        myAccount.withdraw(withdrawalAmount);
        cout << "After Withdrawal: " << myAccount.getBalance() << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "Invalid Argument Exception: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Runtime Error Exception: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected exception occurred!" << endl;
    }

    return 0;
}