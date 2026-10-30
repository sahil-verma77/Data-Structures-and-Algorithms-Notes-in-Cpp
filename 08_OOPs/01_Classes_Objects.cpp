#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Objects :- Real life entities
// Class :- Blueprint (Classification)
class Student{ // User defined Data Type
public:
    string name;
    int rollNo;
    float cgpa;
};
int main() {
    Student x; // x is an object/ a variable
    x.name = "Sahil";
    x.rollNo = 46;
    x.cgpa = 8.9;

    Student y;
    y.name = "Manish";
    y.rollNo = 1049;
    y.cgpa = 9.75;

    Student z;
    z.name = "Ikram";
    z.rollNo = 42;
    z.cgpa = 8.1;

    cout << x.name << " " << x.rollNo << " " << x.cgpa << endl;
}