#include <iostream>
using namespace std;

int main() {

    float a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if (op == '+') {
        cout << "Answer = " << a + b;
    }

    else if (op == '-') {
        cout << "Answer = " << a - b;
    }

    else if (op == '*') {
        cout << "Answer = " << a * b;
    }

    else if (op == '/') {
        cout << "Answer = " << a / b;
    }

    else {
        cout << "Wrong operator!";
    }

    return 0;
}
