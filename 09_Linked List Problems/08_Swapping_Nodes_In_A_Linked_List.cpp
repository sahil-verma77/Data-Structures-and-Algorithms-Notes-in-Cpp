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
Node* swapNodes(Node* head, int k) {
    Node* slow = head;
    Node* fast = head;
    for (int i = 1; i < k; i++) {
        fast = fast->next;
    }
    Node* firstNode = fast;
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    Node* secondNode = slow;

    // int temp = firstNode->val;
    // firstNode->val = secondNode->val;
    // secondNode->val = temp;
    // // Or
    swap(firstNode->val, secondNode->val);
    
    return head;
}
int main() {
    // Leetcode 1721
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

    int k = 2;

    print(head);
    Node* result = swapNodes(head, k);
    print(result);
}