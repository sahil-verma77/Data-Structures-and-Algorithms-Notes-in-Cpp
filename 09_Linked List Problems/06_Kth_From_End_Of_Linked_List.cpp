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
int getKthFromLast(Node* head, int k) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    temp = head;
    if (k > len) return -1;
    for (int i = 1; i <= len-k; i++) {
        temp = temp->next;
    }
    return temp->val;
}
int getKthFromLast_2(Node* head, int k) {
    Node* slow = head;
    Node* fast = head;
    // Move fast k steps ahead
    for (int i = 1; i <= k; i++) {
        if (fast == NULL) return -1;
        fast = fast->next;
    }
    // Move slow & fast together untill fast is not NULL
    while(fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->val;
}
int main() {
    // GfG (Kth from End of Linked List)
    Node* head = new Node(10); // head
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);

    // Attaching Nodes
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    int k = 3;

    print(head);
    cout << getKthFromLast(head, k) << endl; 
    cout << getKthFromLast_2(head, k) << endl; 
}