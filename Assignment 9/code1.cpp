#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;

    fout.open("destination.txt");
    fin.open("source.txt");

    if (!fin) {
        cout << "error opening source file: \n";
        return 1;
    }

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File opened successfully \n";

    fin.open("source.txt");
    int word_count = 0;
    string word;

    while (fin >> word) {
        word_count++;
    }

    cout << "word count: " << word_count << "word count" << "\n";
    fin.close();

    fin.open("source.txt");
    string target;
    int count = 0;

    while (fin >> word) {
        if (word == target) {
            count++;
        }
    }

    cout << "enter target" << endl;
    cin >> target;
    cout << "word occurance" << count << endl;
    fin.close();

    fin.open("source.txt");
    int digit_count;
    int space_count;

    while (fin.get(ch)) {
        if (isdigit(ch)) {
            digit_count++;
        }
        if (isspace(ch)) {
            space_count++;
        }
    }

    cout << "Digit: " << digit_count << "\n";
    cout << "Space: " << space_count << "\n";
    return 0; // This return 0 is present, but more code follows

    int main() { // main is re-defined here
        ilogin *login;
        elogin e;
        mlogin c;

        mlogin m; // New object m is declared, and mlogin m is written out
        login = &e;
        login->accept();
        login->display();

        login = &m;
        login->accept();
        login->display();

        return 0;
    }
}
