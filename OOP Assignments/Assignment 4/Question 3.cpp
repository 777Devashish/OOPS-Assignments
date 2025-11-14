#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    public:
        int num1;
        void accept() {
            cout << "enter first number" << endl;
            cin >> num1;
        }
    friend void greatestnum(A p, B q);
};

class B {
    public:
        int num2;
        void accept 2() {
            cout << "enter second number" << endl;
            cin >> num2;
        }
    friend void greatestnum(A p, B q);
};

void greatestnum(A p, B q) {
    if (p.num1 > q.num2) {
        cout << "greatest number = " << p.num1 << endl;
    } else {
        cout << "greatest number = " << q.num2 << endl;
    }
}

int main() {
    A R; // Correcting to R and F based on function calls in the last image
    B F;
    R.accept();
    F.accept 2();
    greatestnum(R, F);
}