#include <iostream>
#include <string>
using namespace std;

class books
{
public:
    int price, pages;
    string name;

    void details()
    {
        cout << "\nEnter name of the book: ";
        cin >> name;

        cout << "Enter price of the book: ";
        cin >> price;

        cout << "Enter the number of pages of the book: ";
        cin >> pages;
    }
};

int main()
{
    books b1, b2;

    b1.details();
    b2.details();

    if (b1.price > b2.price)
    {
        cout << "\n" << b1.name << " is more expensive.\n";
    }
    else
    {
        cout << "\n" << b2.name << " is more expensive.\n";
    }

    return 0;
}