#include <iostream>
using namespace std;

class person {
    protected:
        string name;
        int age;
};

class student : protected person {
    private:
        int roll_no;
    public:
        void accept() {
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter the name: ";
            // Missing cin >> name based on the previous line's prompt and the next line's prompt
            cout << "Enter the roll no of the student: ";
            cin >> roll_no;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll number: " << roll_no << endl;
        }
};

int main() {
    student s1;
    s1.accept();
    s1.display();
}