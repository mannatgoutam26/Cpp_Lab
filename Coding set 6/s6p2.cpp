#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Square root of a negative number cannot be calculated.";
    }
};

int main() {
    int number;
    cout << "Enter the number you want root of: ";
    cin >> number;

    try {
        if (number < 0)
            throw NegativeNumberException();
        else
            cout << "Square root: " << sqrt(number) << endl;
    }
    catch (NegativeNumberException &n) {
        cout << n.what() << endl;
    }

    return 0;
}