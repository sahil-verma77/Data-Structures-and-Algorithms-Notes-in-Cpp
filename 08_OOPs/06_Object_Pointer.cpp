#include <iostream>
using namespace std;
class Cricketer {
public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average) {
        (*this).name = name; // this->name = name;
        this->runs = runs;
        this->average = average;
    }
    void print() {
        cout << name << endl;
        cout << runs << endl;
        cout << average << endl;
    }
};
int main() {
    Cricketer c1("Virat Kohli", 14000, 58.1);
    Cricketer c2("Sachin Tendulkar Sir", 18000, 46.7);
    Cricketer c3("Rohit Sharma", 11000, 49.4);

    Cricketer* ptr = &c1; // Object Pointer
    ptr->average = 74.2; // (*ptr).average = 74.2;

    // c1.print();
    cout << c1.name << endl;
    cout << c1.runs << endl;
    cout << c1.average << endl;

    cout << ptr->name << endl; // (*ptr).name
    cout << ptr->runs << endl; // (*ptr).runs
    cout << ptr->average << endl; // (*ptr).average

    // int x = 10;
    // int* ptr = &x;
    // *ptr = 20;
    // cout << x <<  endl; // 20
    // cout << *ptr << endl; // 20


    int x = 10;
    int* y = new int(10);
    cout << x << endl;
    cout << *y << endl;
    
    Cricketer* p = new Cricketer("ABD", 10000, 55.2); // Object Pointer
    p->print();
    // cout << p->name << endl;
    // cout << p->runs << endl;
    // cout << p->average << endl;
}