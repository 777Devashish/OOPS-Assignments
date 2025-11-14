#include <iostream>
using namespace std;
class student {
    public:
        class marks {
            private:
                int roll;
                float per;
            public:
                void accept() {
                    cout << "Enter the roll number of student: ";
                    cin >> roll;
                    cout << "Enter the percentage of student: ";
                    cin >> per;
                }
                void display() {
                    cout << "Roll number: " << roll << endl;
                    cout << "Percentage: " << per << endl;
                }
        }; // End of class marks
}; // End of class student

int main() {
    student::marks m1;
    m1.accept();
    m1.display();
}