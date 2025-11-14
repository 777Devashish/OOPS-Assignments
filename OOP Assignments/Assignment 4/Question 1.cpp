#include <iostream>
using namespace std;

class result 2; // Forward declaration

class result 1 {
    int m1;
    public:
        void accept() {
            cout << "Enter marks of first student: ";
            cin >> m1;
        }
    friend void calculate(result 1 p, result 2 q);
};

class result 2 {
    int m2;
    public:
        void accept 2() {
            cout << "Enter marks of second student: ";
            cin >> m2;
        }
    friend void calculate(result 1 p, result 2 q);
};

void calculate(result 1 p, result 2 q) {
    int total = (p.m1 + q.m2) / 2;
    cout << "total marks of both the students: " << total << endl;
}

int main() {
    result 1 R;
    result 2 F;
    R.accept();
    F.accept 2();
    calculate(R, F);
}