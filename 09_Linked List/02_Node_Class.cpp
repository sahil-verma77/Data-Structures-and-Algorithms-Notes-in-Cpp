#include <iostream>
using namespace std;
class Node { // User Defined Data Type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    Node a(7); // head
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);

    // Attaching Nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    cout << a.next << " " << &b << endl;
    cout << a.next->val << endl; // --> b.val 'Or' (*a.next).val 'Or' (*(a.next)).val
}