#include <iostream>
#include <queue>
using namespace std;

template <class T>
class queue {
    private:
        queue <T> q;
    public:
        void Enqueue(T elements) {
            q.push(elements);
            cout << "element " << elements << " Enqueued Successfully\n";
        }

        void dequeue() {
            if (q.empty()) {
                cout << "Queue is empty cannot dequeue \n";
            }
            else {
                cout << q.front() << " dequeued succes fully \n";
                q.pop();
            }
        }

        void display() {
            cout << "Queue elements: \n";
            queue <T> temp = q;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
};

int main() {
    Queue <int> mq;
    mq.enqueue(30);
    mq.enqueue(20);
    mq.enqueue(10);

    mq.display();

    mq.dequeue();
    mq.display();

    return 0;
}