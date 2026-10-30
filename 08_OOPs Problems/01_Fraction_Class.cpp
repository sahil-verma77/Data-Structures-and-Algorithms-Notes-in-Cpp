#include <iostream>
#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;
class Fraction {
public:
    int num;
    int den;
    Fraction(int num, int den) {
        if (den == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        this->num = num;
        this->den = den;
        simplify();
    }
    void print() {
        cout << num << "/" << den << endl;
    }
    void add(Fraction f) {
        num = num * f.den + f.num * den;
        den = den * f.den;
        simplify();
    }
    void subtract(Fraction f) {
        num = num * f.den - f.num * den;
        den = den * f.den;
        simplify();
    }
    void multiply(Fraction f) {
        num = num * f.num;
        den = den * f.den;
        simplify();
    }
    void divide(Fraction f) {
        if (f.num == 0) {
            throw invalid_argument("Division by zero is not possible");
        }
        num = num * f.den;
        den = den * f.num;
        simplify();
    }
    void simplify() {
        int hcf = abs(__gcd(num, den));
        if (hcf != 0) {
            num /= hcf;
            den /= hcf;
        }
        if (den < 0) {
            num *= -1;
            den *= -1;
        }
    }
};
// Fraction multiply(Fraction& f1, Fraction& f2) {
//     Fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den;
//     return res;
// }
int main() {
    try {
        Fraction f1(-2, 5); // 2/5
        Fraction f2(0, 2); // 3/5
        // Fraction ans = multiply(f1, f2);
        // ans.print();
    
        // f1.add(f2); // f1 mein f2 add kardo
        // f1.subtract(f2);
        // f1.multiply(f2);
        f1.divide(f2);
        f1.print();
    }
    catch (const invalid_argument& e) {
        cout << "Caught Expected Error: " << e.what() << endl;
    }
}
