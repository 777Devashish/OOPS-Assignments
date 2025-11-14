#include <iostream>
#include <math>
using namespace std;

template <class T>
class T1 {
    public:
        T m1, m2;

        void accept() {
            cout << "Enter the first number: ";
            cin >> m1;
            cout << "Enter the second number: ";
            cin >> m2;
        }

        void calc() {
            int choice;
            cout << "\n--Simple Calculator Menu--\n";
            cout << "1. addition\n";
            cout << "2. Multiplication\n";
            cout << "3. Division\n";
            cout << "4. Subtraction\n";
            cout << "5. Square root\n";
            cout << "6. Percentage (m1 is what % of m2)\n";
            cout << "7. Power (Square of both numbers)\n";
            cout << "8. Trigonometric (Sin values)\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Sum = " << m1 + m2 << endl;
                    break;
                case 2:
                    cout << "Multiplication = " << m1 * m2 << endl;
                    break;
                case 3:
                    cout << "Division = " << m1 / m2 << endl;
                    break;
                case 4:
                    cout << "Subtraction = " << m1 - m2 << endl;
                    break;
                case 5:
                    cout << "Square root of " << m1 << " = " << sqrt(m1) << endl;
                    break;
                case 6:
                    cout << m1 << "% of " << m2 << endl; // Calculation is missing in the output string
                    break;
                case 7:
                    cout << "Square of " << m1 << " = " << pow(m1, 2) << endl;
                    cout << "Square of " << m2 << " = " << pow(m2, 2) << endl;
                    break;
                case 8:
                    cout << "Sin (" << m1 << ") = " << sin(m1) << endl;
                    cout << "Sin (" << m2 << ") = " << sin(m2) << endl;
                    break;
                default:
                    cout << "invalid choice!" << endl;
            }
        }
};

int main() {
    T1 <double> obj;
    obj.accept();
    obj.calc();
    return 0;
}