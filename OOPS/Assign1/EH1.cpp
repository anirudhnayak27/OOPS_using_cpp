#include <iostream>
#include <cmath>
using namespace std;

class MyPrimeException : public exception {
public:
    const char* what() const _NOEXCEPT override {
        return "Number is prime!";
    }
};


class Numbers {
public:
    int a, b;
    Numbers(int num1, int num2) : a(num1), b(num2) {}
    int findGCDIterative() {
        int smaller = (a < b) ? a : b;

        for (int i = smaller; i >= 1; --i) {
            if (a % i == 0 && b % i == 0) {
                return i;
            }
        }
        return 1; 
    }
};

void checkPrime(int num) {
    if (num < 2) {
        throw MyPrimeException();
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            throw MyPrimeException();
        }
    }
}

int main() {
    try {
        int num1, num2 , num3;
        cin >> num1 >> num2 >> num3;
        
        Numbers numbersObj(num1, num2);

       
        int gcd = numbersObj.findGCDIterative();
        cout << "GCD of " << numbersObj.a << " and " << numbersObj.b << " is: " << gcd << endl;

      
        int numberToCheck = num3;
        checkPrime(numberToCheck);
    }
    catch (const MyPrimeException& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected exception occurred!" << endl;
    }

    return 0;
}
