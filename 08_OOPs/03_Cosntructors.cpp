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
    Student(int r, float c, string n) { // Parameterised Constructor
        rollNo = r;
        name = n;
        cgpa = c;
    }
    Student(string n, int r) { // Parameterised Constructor
        rollNo = r;
        name = n;
    }
    Student() { // Default Constructor

    }
};
int main() {
    Student x("Sumit", 8.7, 39);
    cout << x.name << " " << x.rollNo << " " << x.cgpa << endl;
    
    Student y(1049, 9.7, "Manish");
    cout << y.name << " " << y.rollNo << " " << y.cgpa << endl;

    Student z("Ikram", 42);
    cout << z.name << " " << z.rollNo << endl;

    Student alpha;
}