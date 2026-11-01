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
class MyLinkedList { // User Defined Data Type
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtTail(int val) { // T.C. = O(1)
        Node* n = new Node(val);
        if (length == 0) head = tail = n; // LL is empty
        else { // LL isn't empty
            tail->next = n;
            tail = n;
        }
        length++;
    }
    void insertAtHead(int val) { // T.C. = O(1)
        Node* n = new Node(val);
        if (length == 0) head = tail = n;
        else {
            n->next = head;
            head = n;
        }
        length++;
    }
    void insert(int idx, int val) { // T.C. = O(n)
        if (idx < 0 || idx > length) {
            cout << "Invalid Index!" << endl;
            return;
        }
        Node* n = new Node(val);
        if (idx == 0) { // insert at head
            insertAtHead(val);
            return;
        }
        if (idx == length) { // insert at tail
            insertAtTail(val);
            return;
        }
        // Actual Code
        Node* temp = head;
        for (int i = 1; i <= idx-1; i++) {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }
    void removeAtHead() { // T.C. = O(1)
        if (length == 0) {
            cout << "List is Empty!" << endl;
            return;
        }
        Node* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;

        length--;
    }
    void remove(int idx) { // T.C. = O(1)
        if (idx < 0 || idx >= length) {
            cout << "Invalid Index!" << endl;
            return;
        }
        if (idx == 0) {
            removeAtHead();
            return;
        }
        Node* temp = head;
        for (int i = 1; i <= idx-1; i++) {
            temp = temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        if (idx == length-1) tail = temp; // IMPORTANT
        delete toBeDeleted;

        length--;
    }
    int get(int idx) { // T.C. = O(n)
        if (idx < 0 || idx >= length) {
            cout << "Invalid Index!" << endl;
            return -1;
        }
        Node* temp = head;
        for (int i = 1; i <= idx; i++) {
            temp = temp->next;
        }
        return temp->val;
    }
    int size() {
        return length;
    }
};

int main() {
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtHead(67);
    list.display();
    list.removeAtHead();
    list.display();
    // list.length = 0; // ERROR
    // list.head = 0; // ERROR
    cout << list.size() << endl;
    list.insert(2, 43);
    list.display();
    cout << list.get(2) << endl;
    list.remove(2);
    list.display();
}