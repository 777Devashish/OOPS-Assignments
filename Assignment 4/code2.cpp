#include <iostream>
using namespace std;

class demo {
    public:
        int p, q;
        void accept() {
            cout << "enter 2 nos:- " << endl;
            cin >> p >> q;
        }

        void display() {
            cout << "after swapping: " << " Value of p = " << p << " Value of q = " << q << endl;
        }
};

void swap(demo &t) {
    int temp = t.p;
    t.p = t.q;
    t.q = temp;
}

int main() {
    demo k;
    k.accept();
    swap(k);
    k.display();
}
