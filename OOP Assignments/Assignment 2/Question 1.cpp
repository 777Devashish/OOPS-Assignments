#include <iostream>
using namespace std;

class City {
public:
    int population;
    string name;

    void info() {
        cout << "Enter city name and population: ";
        cin >> name >> population;
    }
};

int main() {
    City c[5];
    int i, max = 0, s;

    for (i = 0; i < 5; i++) {
        c[i].info();
    }

    max = c[0].population;
    for (i = 0; i < 5; i++) {
        if (c[i].population > max) {
            max = c[i].population;
            s = i;
        }
    }

    cout << "Max population: " << max << " of city " << c[s].name << endl;

    return 0;
}