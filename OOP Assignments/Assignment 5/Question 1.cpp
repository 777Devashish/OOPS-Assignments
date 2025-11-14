#include <iostream>
using namespace std;

class sum {
    int n;
    int sum;

    public:
        sum(int num) { // Parameterized Constructor
            n = num;
            sum = 0;
            for (int i = 1; i <= n; i++) {
                sum = sum + i;
            }
        }

        void display() {
            cout << "sum of numbers from 1 to " << n << " is " << sum << endl;
        }

        // The image shows handwritten code for Default and Copy constructors on the side.
        // Default Constructor (as written):
        /*
        sum() {
            n = 10;
            sum = 0;
            for (int i = 1; i <= n; i++) {
                sum = sum + i;
            }
        }
        */

        // Copy Constructor (as written):
        /*
        sum(sum &obj) {
            n = obj.n;
            sum = obj.sum;
        }
        */
};

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    sum s(n);
    s.display();

    // The image shows handwritten main() code on the side for testing other constructors.
    /*
    // Copy:
    sum s1(5);
    sum s2(s1);
    s2.display();

    // Default:
    sum s;
    s.display();
    */

    return 0;
}