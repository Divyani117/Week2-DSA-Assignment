#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};

    stack<int> s;

    Node* temp = head;

    while (temp != NULL) {
        s.push(temp->data);
        temp = temp->next;
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
