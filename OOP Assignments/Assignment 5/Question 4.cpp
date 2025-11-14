#include <iostream>
using namespace std;

class college {
    int roll_no;
    string name, course;
    public:
        college() {
            roll_no = 4;
            name = "Tanish";
            course = "Computer Engineering";
        }

        college(int r, string n, string c) {
            roll_no = r;
            name = n;
            course = c;
        }

        void display() {
            cout << "Roll No: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};

int main() {
    college s;
    college s8(8, "Aditya", "Civil");

    s.display();
    cout << endl;
    s1.display();
}