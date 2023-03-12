#include <iostream>
#include "Node.h"
using namespace std;

class Stack {
private:
    nodePtr top;
public:
    Stack():top(0) {};
    void empty() const;
    void push(int element);
    int pop();
    void clear();
};


void Stack::empty() const {
    if(top == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
void Stack::push(int element) {
    nodePtr newNode = new Node(element, top);
    cout << "New node built" << endl;
    top = newNode;
    cout << "New element insert" << endl;
}
int Stack::pop() {
    if(top == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int value = top->item;
    nodePtr current = top;
    top = current->next;
    delete current;
    return value;
}
void Stack::clear() {
    while(top != NULL) {
        nodePtr current = top;
        top = current->next;
        delete current;
    }
    cout << "Clear success" << endl;
}
