#include <iostream>
using namespace std;
class demo {
    int a, b;
    public:
        void accept() {
            cout << "enter 2 numbers:- " << endl;
            cin >> a >> b;
        }

        void display() {
            cout << "Value of a:- " << a;
            cout << "Value of b:- " << b;
        }

    friend void swap_nums(demo &t);
};

void swap_nums(demo &t) {
    int temp = t.a;
    t.a = t.b;
    t.b = temp;
}

int main() {
    demo k;
    k.accept();
    swap_nums(k);
    k.display();
}
