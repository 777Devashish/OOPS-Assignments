#include <iostream>
using namespace std;

class Academic {
    protected:
        int marks;
};

class sports {
    protected:
        int spt_score;
};

class Result : protected Academic, protected sports {
    private:
        float per;
    public:
        void accept() {
            cout << "Enter academic marks & sports score: ";
            cin >> marks >> spt_score;
        }

        void calculate() {
            float total = (marks + spt_score) / 200 * 100;
        }

        void display() {
            cout << "Marks: " << marks;
            cout << "Sports score: " << spt_score;
            cout << "Total score: " << total;
        }
};

int main() {
    Result R1;
    R1.accept();
    R1.calculate();
    R1.display();
}