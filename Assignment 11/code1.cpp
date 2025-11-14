#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

int main() {
    vector <int> vec(5);
    int scalar;
    int i;

    cout << "Enter vector 5 elements: ";
    for (i = 0; i < 5; i++) {
        cin >> vec[i];
    }

    cout << endl;
    cout << "Vector elements are: " << endl;
    for (i = 0; i < 5; i++) {
        cout << vec[i] << endl;
    }
    cout << endl;

    cout << "Modified Elements are: ";
    for (i = 0; i < 5; i++) {
        vec[i] = vec[i] + i * 2;
        cout << vec[i] << ", ";
    }
    cout << endl;

    cout << "Enter a scalar value to multiply: ";
    cin >> scalar;
    cout << "After multiplying by scalar: ";
}
for (i = 0; i < 5; i++)
    vec[i] = vec[i] * scalar;

for (i = 0; i < 5; i++)
    cout << vec[i] << " ";

cout << endl;
