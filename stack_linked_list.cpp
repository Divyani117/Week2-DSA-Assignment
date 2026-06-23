#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* topNode = NULL;

void push(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->next = topNode;
    topNode = temp;
}

void pop() {
    if (topNode == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
}

void display() {
    Node* temp = topNode;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();
}
