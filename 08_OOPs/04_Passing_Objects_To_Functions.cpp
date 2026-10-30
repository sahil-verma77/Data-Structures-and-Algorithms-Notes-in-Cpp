#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student{ // User defined Data Type
public:
    string name;
    int rollNo;
    float cgpa;
    // Constructor Overloading
    Student(string n, float c, int r) { // Parameterised Constructor
        rollNo = r;
        name = n;
        cgpa = c;
    }
    void print() {
        cout << name << " " << rollNo << " " << cgpa << endl;
    }
};
void change(Student& s) {
    s.name = "Aakash";
}
int main() {
    Student x("Sumit", 8.7, 39); // By default:- Pass by Value
    change(x);
    x.print();
}