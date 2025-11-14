#include <iostream>
using namespace std;

class num {
    int a;
    public:
        void accept() {
            cout << "Enter value of a: ";
            cin >> a;
        }

        void disp() {
            cout << "Value of a: " << a;
            cin >> a;
        }

        void disp() {
            cout << "Value of a: " << a;
        }

        void operator-() {
            a = -a;
        }
};

int main() {
    num n1;
    n1.accept();
    -n1;
    n1.disp();
}
