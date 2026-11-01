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
bool hasCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
int main() {
    // Leetcode 141
    Node* head = new Node(3); // head
    Node* b = new Node(2);
    Node* c = new Node(0);
    Node* d = new Node(-4);

    // Attaching Nodes
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    int pos = 1;

    cout << hasCycle(head) << endl;
}