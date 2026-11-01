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
Node* middleNode(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    temp = head;
    for (int i = 1; i <= length/2; i++) {
        temp = temp->next;
    }
    return temp;
}
int main() {
    // Leetcode 876
    Node* head = new Node(1); // head
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    // Attaching Nodes
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print(head);
    Node* result = middleNode(head);
    print(result);
}