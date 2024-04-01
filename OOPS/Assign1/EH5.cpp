#include <iostream>
#include <stdexcept>
#include <regex>

using namespace std;

class InvalidNameException : public invalid_argument {
public:
    InvalidNameException(const string& message) : invalid_argument(message) {}
};

class InvalidAgeException : public invalid_argument {
public:
    InvalidAgeException(const string& message) : invalid_argument(message) {}
};

class InvalidEmailException : public invalid_argument {
public:
    InvalidEmailException(const string& message) : invalid_argument(message) {}
};

class PersonalInformation {
private:
    string name;
    int age;
    string email;

public:
    PersonalInformation(const string& n, int a, const string& e) : name(n), age(a), email(e) {
        validateName();
        validateAge();
        validateEmail();
    }

    void validateName() {
        if (regex_search(name, regex("[^a-zA-Z]"))) {
            throw InvalidNameException("Invalid name: should not contain digits or special characters");
        }
    }

    void validateAge() {
        if (age < 0) {
            throw InvalidAgeException("Invalid age: should be a positive integer");
        }
    }

    void validateEmail() {
        if (!regex_match(email, regex("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"))) {
            throw InvalidEmailException("Invalid email format");
        }
    }
};

int main() {
    try {
        string name;
        int age;
        string email;

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        if (cin.fail()) {
            throw InvalidAgeException("Invalid age: should be a positive integer");
        }

        cout << "Enter email: ";
        cin >> email;

        PersonalInformation userInfo(name, age, email);

        cout << "Personal information accepted successfully." << endl;
    }
    catch (const InvalidNameException& e) {
        cerr << "Invalid Name Exception: " << e.what() << endl;
    }
    catch (const InvalidAgeException& e) {
        cerr << "Invalid Age Exception: " << e.what() << endl;
    }
    catch (const InvalidEmailException& e) {
        cerr << "Invalid Email Exception: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected exception occurred!" << endl;
    }

    return 0;
}
