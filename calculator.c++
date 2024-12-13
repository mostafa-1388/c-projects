#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare / define variables
    string operation;
    double number1, number2;

    // Get user input for numbers and operation
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    // IF ELSE STATEMENT CHECKING ENTERED OPERATION
    if (operation == "+") {
        cout << number1 + number2;
    } else if (operation == "-") {
        cout << number1 - number2;
    } else if (operation == "*") {
        cout << number1 * number2;
    } else if (operation == "/") {
        cout << number1 / number2;
    } else {
        cout << "Invalid operation! Please enter either +, -, *, or /.";
    }

    return 0;
}
