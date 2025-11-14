#include <iostream>
using namespace std;

class Vehicle {
    protected:
        string brand;
        string model;
};

class car : protected Vehicle {
    protected:
        string type;
};

class EV : protected car {
    private:
        int battery;
    public:
        void accept() {
            cout << "Enter brand model type & battery capacity";
            cin >> brand >> model >> type >> battery;
        }

        void display() {
            cout << "Brand name: " << brand << endl;
            cout << "Model name: " << model << endl;
            cout << "Type: " << type << endl;
            cout << "Battery capacity: " << battery << "KWH";
        }
};

int main() {
    EV e1;
    e1.accept();
    e1.display();
}
