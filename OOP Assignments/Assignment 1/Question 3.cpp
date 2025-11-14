#include <iostream>
using namespace std;

class time
{
public:
    int H, M, S, total;

    void details()
    {
        cout << "Enter number of hours: ";
        cin >> H;

        cout << "Enter number of minutes: ";
        cin >> M;

        cout << "Enter number of seconds: ";
        cin >> S;
    }
};

int main()
{
    time t1;

    t1.details();

    cout << "\nTime is: " << t1.H << " : " << t1.M << " : " << t1.S << endl;

    t1.total = t1.H * 3600 + t1.M * 60 + t1.S;

    cout << "Total time in seconds is: " << t1.total << endl;

    return 0;
}