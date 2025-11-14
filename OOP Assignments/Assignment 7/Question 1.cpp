#include <iostream>
using namespace std;

class area {
    public:
        int l, b;
        void area(int a, int b) {
            int c = a + b;
            cout << "Laboratory Area: " << c << "sq";
        }
        void area(int s) {
            int f = s * s;
            cout << "Class Area: " << f << "sq";
        }
};

int main() {
    area m;
    m.area(20, 30);
    cout << endl;
    m.area(20);
}