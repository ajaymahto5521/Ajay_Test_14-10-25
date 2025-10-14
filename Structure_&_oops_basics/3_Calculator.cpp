#include <iostream>
using namespace std;

class Calculator {
private:
    double a, b;

public:
    
    Calculator(double x, double y) {
        a = x;
        b = y;
    }

    double add() { return a + b; }
    double sub() { return a - b; }
    double multi() { return a * b; }
    double div() {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void display() {
        cout << "Numbers: " << a << " and " << b << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << sub() << endl;
        cout << "Multiplication: " << multi() << endl;
        cout << "Division: " << div() << endl;
    }
};

int main() {
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator c(x, y); 
    c.display();

    return 0;
}
