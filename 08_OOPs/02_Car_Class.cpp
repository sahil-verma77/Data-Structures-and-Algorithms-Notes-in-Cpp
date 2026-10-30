#include <iostream>
using namespace std;
class Car{ // User defined Data Type
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print() {
        cout << name << " " << power << " " << mileage << " " << isE20Compatible << endl;
    }
};
void print(Car x) {
    cout << x.name << " " << x.power << " " << x.mileage << " " << x.isE20Compatible << endl;
}
int main() {
    Car c1;
    c1.isE20Compatible = true;
    c1.name = "Kia Sonet";
    c1.power = 118;
    c1.mileage = 9.2;

    Car c2 = {"Toyota Fortuner", 200, 7.6, false}; // Follows the Order
    // cout << c2.power << endl;

    c1.print();
    print(c1);
    
    c2.print();
    print(c2);
}