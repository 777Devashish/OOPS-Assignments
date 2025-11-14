#include <iostream>
using namespace std;

class college {
    int roll_no;
    string name, course;

    public:
        college(int r, string n) {
            roll_no = r;
            name = n;
            course = "COMPUTER ENGINEERING";
        }

        void display() {
            cout << "Roll no: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};

int main() {
    college s1(5, "Tanish");
    college s2(6, "Aditya");

    s1.display();
    s2.display();
    return 0;
}