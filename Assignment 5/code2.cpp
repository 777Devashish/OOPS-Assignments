#include <iostream>
using namespace std;

class student {
    string name;
    float percentage;

    public:
        student(string n, float p) {
            name = n;
            percentage = p;
        }

        void display() {
            cout << "Name: " << name << "\n Percentage: " << percentage << endl;
        }
};

int main() {
    string name;
    float percentage;

    cout << "Enter the for student: ";
    cin >> name;
    cout << "Enter percentage for student: ";
    cin >> percentage;

    student s1(name, percentage);
    cout << "\n Student Details: \n";
    s1.display();
    return 0;
}
