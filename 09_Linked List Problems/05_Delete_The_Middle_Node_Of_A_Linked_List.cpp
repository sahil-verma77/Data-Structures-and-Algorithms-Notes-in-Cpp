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
Node* deleteMiddle(Node* head) {
    if (head == NULL or head->next == NULL) {
        return NULL;
    }
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    temp = head;
    for (int i = 1; i <= length/2 - 1; i++) {
        temp = temp->next;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    return head;
}
int main() {
    // Leetcode 2095
    Node* head = new Node(1); // head
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(7);
    Node* e = new Node(1);
    Node* f = new Node(2);
    Node* g = new Node(6);

    // Attaching Nodes
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    print(head);
    Node* result = deleteMiddle(head);
    print(result);
}