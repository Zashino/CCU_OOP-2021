class Node {
public:
    int item;
    Node *next;
    Node(int a, Node *b):item(a), next(b) {};
};
typedef Node* nodePtr;
