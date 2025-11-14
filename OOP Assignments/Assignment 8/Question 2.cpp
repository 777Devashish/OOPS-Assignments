#include <iostream>
using namespace std;

class ilogin {
    protected:
        string name;
        string pass;
    public:
        virtual void accept() {
            cout << "Enter name & password: ";
            cin >> name >> pass;
        }
        virtual void disp() {
            cout << "Name" << name << "Password" << pass;
        }
};

class elogin : public ilogin {
    string email;
    string pass;
    public:
        void accept() {
            cout << "Enter email & password: ";
            cin >> email >> pass;
        }
        void disp() {
            cout << "Email" << email << "Password" << pass;
        }
};

class mlogin : public ilogin {
    string mid;
    string pass;
    public:
        void accept() {
            cout << "Enter M_id & password: ";
            cin >> mid >> pass;
        }
        void disp() {
            cout << "M_id" << mid << "Password" << pass;
        }
};

int main() {
    ilogin *iptr;
    ilogin i;
    elogin e;
    mlogin m;

    iptr = &i;
    iptr->accept();
    iptr->disp();
    cout << endl;

    iptr = &e;
    iptr->accept();
    iptr->disp();
    cout << endl;

    iptr = &m;
    iptr->accept();
    iptr->disp();
    cout << endl;

    return 0;
}