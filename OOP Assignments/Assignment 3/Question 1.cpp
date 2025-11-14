#include <iostream>
using namespace std;
class book {
    private:
        int price;
        char title[20];
        char author[20];
    public:
        void accept() {
            cout << "enter the price of the book \n";
            cin >> price;
            cout << "enter the title of the book \n";
            cin >> title;
            cout << "enter the author of the book \n";
            cin >> author;
        }
        void display(); // The handwritten code shows a call to p->display() later, implying a display function should be here, though the definition is missing.
};

int main() {
    book b1;
    book *p;
    p = &b1;
    p->accept();
    p->display();
}