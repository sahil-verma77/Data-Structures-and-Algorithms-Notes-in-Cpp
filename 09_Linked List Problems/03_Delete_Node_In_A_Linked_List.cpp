#include <iostream>
using namespace std;
class Node { // User Defined Data Type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};
void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(Node* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
int main() {
    // Leetcode 237
    Node* head = new Node(4); // head
    Node* b = new Node(5);
    Node* c = new Node(1);
    Node* d = new Node(9);

    // Attaching Nodes
    head->next = b;
    b->next = c;
    c->next = d;

    Node* node = b;

    print(head);
    deleteNode(node);
    print(head);
}