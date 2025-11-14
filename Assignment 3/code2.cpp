#include <iostream>
using namespace std;
class student {
    private:
        int roll;
        float per;
    public:
        void accept() {
            cout << "Enter the roll no. of the student: ";
            cin >> this->roll;
            cout << "Enter the percentage of the student: ";
            cin >> this->per;
        }
        void display() {
            cout << "Roll " << this->roll << endl;
            cout << "Percentage " << this->per << endl;
        }
};

int main() {
    student s1;
    s1.accept();
    s1.display();
}
