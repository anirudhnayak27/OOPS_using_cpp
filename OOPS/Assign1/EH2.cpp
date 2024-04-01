#include <iostream>
#include <vector>
#include <stdexcept>
#include <sstream>

using namespace std;

class InvalidInputException : public exception {
public:
    const char* what() const _NOEXCEPT override {
        return "InvalidInputException: Non-numeric input detected!";
    }
};

double calculateAverageGrade(const vector<double>& grades) {
    double sum = 0.0;

    for (const auto& grade : grades) {
        sum += grade;
    }

    return sum / grades.size();
}

int main() {
    try {
        cout << "Enter the number of students: ";
        int numStudents;
        cin >> numStudents;

        if (cin.fail()) {
            throw InvalidInputException();
        }

        vector<double> grades;

        for (int i = 0; i < numStudents; ++i) {
            cout << "Enter the grade for student " << i + 1 << ": ";
            string input;
            cin >> input;

            try {
                size_t pos;
                double grade = stod(input, &pos);

                if (pos != input.length()) {
                    throw InvalidInputException();
                }

                grades.push_back(grade);
            } catch (const invalid_argument& e) {
                throw InvalidInputException();
            }
        }

        double averageGrade = calculateAverageGrade(grades);

        cout << "Average Grade: " << averageGrade << endl;
    }
    catch (const InvalidInputException& e) {
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
