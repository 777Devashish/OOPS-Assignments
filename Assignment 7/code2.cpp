#include <iostream>
using namespace std;

class sum {
    public:
        int i;
        void sum(float a[5]) {
            float s = 0;
            for (i = 0; i < 5; i++) {
                s = s + a[i];
            }
            cout << "sum of 5 float numbers: " << s << endl;
        }
};

int main() {
    sum s1;
    float c[5];
    int d[10];

    cout << "Enter 5 float nos.: \n";
    for (int i = 0; i < 5; i++) {
        cin >> c[i];
    }
    
    cout << "Enter 10 integer nos.: \n";
    for (int i = 0; i < 10; i++) {
        cin >> d[i];
    }

    s1.sum(c);
    s1.sum(d);
}
