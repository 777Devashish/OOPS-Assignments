#include <iostream>
#include <string> // <cstring> in image is likely intended to be <string> or a container
#include <stack>
using namespace std;

template <class T>
class stack {
    stack <T> my_stack;
    public:
        void accept() {
            int size;
            cout << "Enter the size of the stack" << endl;
            cin >> size;
            T data;
            for (int i = 0; i < size; i++) {
                cout << "Enter the data for the stack" << endl;
                cin >> data;
                my_stack.push(data);
            }
        }

        void pop() {
            T x;
            cout << "Enter the value which you want to delete in" << endl;
            cin >> x;
            if (my_stack.empty()) {
                cout << "the stack is empty" << endl;
            }
            if (!my_stack.empty()) {
                my_stack.pop();
            }
        }

        void display() {
            if (my_stack.empty()) {
                cout << "The stack is empty" << endl;
            }
            while (!my_stack.empty()) {
                cout << my_stack.top();
                my_stack.pop();
            }
        }
};

int main(void) {
    stack <int> k;
    k.accept();
    k.display();
}