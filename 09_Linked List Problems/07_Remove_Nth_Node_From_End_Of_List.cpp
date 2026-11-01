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
Node* removeNthFromEnd(Node* head, int n) {
    Node* slow = head;
    Node* fast = head;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
        if (fast == NULL) { // Remove from head
            head = head->next;
            return head;
        }
    }
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    Node* nodeToDelete = slow->next;
    slow->next = slow->next->next;
    delete nodeToDelete;
    return head;
}
Node* removeNthFromEnd_2(Node* head, int n) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    Node* dummy = new Node(0);
    dummy->next = head;
    temp = dummy;
    for (int i = 1; i <= length-n; i++) {
        temp = temp->next;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    Node* newHead = dummy->next;
    delete dummy;
    return head;
}
int main() {
    // Leetcode 19
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

    int n = 2;

    print(head);
    Node* result = removeNthFromEnd(head, n);
    print(result);

    Node* result2 = removeNthFromEnd_2(head, n);
    print(result2);
}