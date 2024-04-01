#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;

class InvalidTemperatureException : public exception {
public:
    const char* what() const _NOEXCEPT override {
        return "InvalidTemperatureException: Invalid temperature value!";
    }
};

class NonNumericInputException : public exception {
public:
    const char* what() const _NOEXCEPT override {
        return "NonNumericInputException: Non-numeric input detected!";
    }
};

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double getTemperatureInput(const string& prompt) {
    cout << prompt;
    string input;
    cin >> input;

    size_t pos;
    try {
        double temperature = stod(input, &pos);

        if (pos != input.length()) {
            throw InvalidTemperatureException();
        }

        return temperature;
    } catch (const invalid_argument& e) {
        throw NonNumericInputException();
    }
}

int main() {
    try {
        double temperature;

        temperature = getTemperatureInput("Enter temperature in Celsius: ");
        if (temperature < -273.15 || temperature > 10000) {
            throw InvalidTemperatureException();
        }
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;

        temperature = getTemperatureInput("Enter temperature in Fahrenheit: ");
        if (temperature < -459.67 || temperature > 1832) {
            throw InvalidTemperatureException();
        }
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
    }
    catch (const InvalidTemperatureException& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (const NonNumericInputException& e) {
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