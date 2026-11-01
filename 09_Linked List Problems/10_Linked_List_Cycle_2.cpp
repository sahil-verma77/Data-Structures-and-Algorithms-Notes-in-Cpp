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
Node *detectCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if (fast == NULL or fast->next == NULL) return NULL;
    Node* temp = head;
    while (temp != slow) {
        temp = temp->next;
        slow = slow->next;
    }
    return temp;
}
// // OR
// Node *detectCycle(Node *head) {
//     Node* slow = head;
//     Node* fast = head;
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) {
//             Node* temp = head;
//             while (temp != slow) {
//                 temp = temp->next;
//                 slow = slow->next;
//             }
//             return temp;
//         };
//     }
//     return NULL;
// }
int main() {
    // Leetcode 142
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

    Node* result = detectCycle(head);
    // print(result);
}