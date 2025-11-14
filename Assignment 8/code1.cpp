#include <iostream>
using namespace std;

class mstring {
    string str;
    public:
        mstring(string s) {
            str = s;
        }

        mstring() {
            str = "";
        }

        void operator+(mstring obj) {
            str = str + obj.str;
        }

        void disp() {
            cout << str;
        }
};

int main() {
    mstring s1("xyz"), s2("pqr"), s3;
    s1 + s2;
    cout << "concentrated string: ";
    s3 = s1;
    s3.disp();
}
