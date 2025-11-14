#include <iostream>
using namespace std;

class staff {
    string name;
    string post;
};

int main() {
    staff s[5];
    cout << "Enter name & post for 5 staff members: ";

    for (int i=0; i<5; i++)
    {
        cout << "staff" << i+1 << " Name: ";
        cin >> s[i].name;
        cout << "staff" << i+1 << " Post: ";
        cin >> s[i].post;
    }

    cout << "staff members who are HOD: \n";

    for (int i=0; i<5; i++) {
        if (s[i].post == "HOD")
            cout << s[i].name << endl;
    }

    return 0;
}