#include <iostream>
using namespace std;
class MyVector { // User Defined Data Structure
private:
    int length; // kitne elements hai vector mein
    int* arr;
    int cap;
public:
    MyVector(int capacity, int default_value) {
        // length = cap = capacity;
        cap = capacity;
        length = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++) {
            arr[i] = default_value;
        }
    }
    int size() {
        return length;
    }
    int capacity() {
        return cap;
    }
    void pop_back() {
        if (length == 0) {
            cout << "Vector is Empty!" << endl;
            return;
        }
        length--;
    }
    void push_back(int val) {
        if (length == cap) { // array is FULL
            // double the capacity & copy paste
            cap = 2*cap;
            int* temp = new int[cap];
            for (int i = 0; i < length; i++) {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length++] = val;
    }
    int get(int idx) {
        if (idx < 0 || idx >= length) {
            cout << "Index out of bound" << endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx, int val) {
        if (idx < 0 || idx >= length) {
            cout << "Index out of bound" << endl;
            return;
        }
        arr[idx] = val;
    }
    void print() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
int main() {
    MyVector v(5, -1); // vector<int> v(5, -1);
    cout << v.size() << " " << v.capacity() << endl;
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.push_back(20);
    v.print();
    cout << v.get(5) << endl;
    v.set(2, 120);
    // cout << v.get(2) << endl;
    v.print();
    
    
    // // int arr[5];
    // int* arr = new int[5];
    // arr[0] = 10; arr[1] = 20;

    // int b[] = {67, 21, 8, 2};
    // arr = b; // 'arr' is no longer holding 5 sized array, it is now holding this 2 sized array
    // cout << arr[0] << endl; // 67
    

    // int b[] = {67, 21, 8, 2};
    // int* arr = b;
    // cout << arr[0] << endl; // 67
}