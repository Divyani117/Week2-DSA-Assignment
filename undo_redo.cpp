#include <iostream>
#include <stack>
using namespace std;

stack<string> undoStack;
stack<string> redoStack;

void performAction(string action) {
    undoStack.push(action);

    while (!redoStack.empty())
        redoStack.pop();

    cout << "Performed: " << action << endl;
}

void undo() {
    if (undoStack.empty())
        return;

    redoStack.push(undoStack.top());

    cout << "Undo: " << undoStack.top() << endl;

    undoStack.pop();
}

void redo() {
    if (redoStack.empty())
        return;

    undoStack.push(redoStack.top());

    cout << "Redo: " << redoStack.top() << endl;

    redoStack.pop();
}

int main() {
    performAction("Type A");
    performAction("Type B");
    performAction("Delete B");

    undo();
    undo();

    redo();

    return 0;
}
