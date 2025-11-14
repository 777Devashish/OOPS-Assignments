#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int a;
    public:
        void accept 1() {
            cout << "enter a:- " << endl;
            cin >> a;
        }

        void display 1() {
            cout << "Value of a:- " << a;
        }

    Friend void swap_numbers(A &p, B &q);
};
#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int a;
    public:
        void accept 1() {
            cout << "enter a:- " << endl;
            cin >> a;
        }

        void display 1() {
            cout << "Value of a:- " << a;
        }

    Friend void swap_numbers(A &p, B &q);
};

class B {
    int b;
    public:
        void accept 2() {
            cout << "enter b:- " << endl;
            cin >> b;
        }

        void display 2() {
            cout << "Value of b:- " << b;
        }

    Friend void swap_numbers(A &p, B &q);
};

void swap_numbers(A &p, B &q) {
    int temp = p.a;
    p.a = q.b;
    q.b = temp;
}

int main() {
    A R;
    B F;
    R.accept 1();
    F.accept 2();
    swap_numbers(R, F);
    R.display 1();
    F.display 2();
}
class B {
    int b;
    public:
        void accept 2() {
            cout << "enter b:- " << endl;
            cin >> b;
        }

        void display 2() {
            cout << "Value of b:- " << b;
        }

    Friend void swap_numbers(A &p, B &q);
};

void swap_numbers(A &p, B &q) {
    int temp = p.a;
    p.a = q.b;
    q.b = temp;
}

int main() {
    A R;
    B F;
    R.accept 1();
    F.accept 2();
    swap_numbers(R, F);
    R.display 1();
    F.display 2();
}