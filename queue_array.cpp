#include <iostream>
using namespace std;

int queueArr[100];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == 99) {
        cout << "Queue Full\n";
        return;
    }

    if (front == -1)
        front = 0;

    queueArr[++rear] = value;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Empty\n";
        return;
    }

    front++;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();
}
