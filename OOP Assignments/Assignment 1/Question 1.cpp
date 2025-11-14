#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll_no;
    string name;

public:
    void details()
    {
        cout << "Enter the roll number of the student: ";
        cin >> roll_no;

        cout << "Enter name of the student: ";
        cin >> name;
    }

    void display()
    {
        cout << "\nRoll no: " << roll_no << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    student s1;
    s1.details();
    s1.display();

    return 0;
}