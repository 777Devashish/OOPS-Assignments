#include <iostream>
using namespace std;

class account {
    int acc_no;
    float balance;
public:
    void accept() {
        cout << "Enter account number:";
        cin >> acc_no;
        cout << "Enter balance:";
        cin >> balance;
    }

    void interest() {
        if (balance >= 5000) {
            balance += balance * 0 - 10;
        }
    }

    void display() {
        cout << "Account no: " << acc_no << ", Balance: " << balance << endl;
    }
};

int main() {
    account acc[10];

    for (int i = 0; i < 10; i++) {
        cout << "Account " << i + 1 << ":" << endl;
        acc[i].accept();
    }

    for (int i = 0; i < 10; i++) {
        acc[i].interest();
    }

    cout << "Account details after applying interest:" << endl;
    for (int i = 0; i < 5; i++) {
        acc[i].display();
    }

    return 0;
}