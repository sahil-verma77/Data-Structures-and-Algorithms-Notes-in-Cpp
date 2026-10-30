#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Fraction {
public:
    float real_num;
    float imag_num;
    float real_den;
    float imag_den;
    Fraction(float real_num, float imag_num, float real_den, float imag_den) {
        if (real_den == 0 && imag_den == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        this->real_num = real_num;
        this->imag_num = imag_num;
        this->real_den = real_den;
        this->imag_den = imag_den;
        output();
    }
    void output(){
        float common_den = real_den * real_den + imag_den * imag_den;
        
        float new_real_num = real_num * real_den + imag_num * imag_den;
        float new_imag_num = imag_num * real_den - real_num * imag_den;

        real_num = new_real_num;
        real_den = common_den;
        imag_num = new_imag_num;
        imag_den = common_den;
        print();
    }
    void print() {
        cout << real_num << "/" << real_den << " + (" <<  imag_num << "/" << imag_den << ")i" << endl;
    }
};
class Complex {
public:
    float real;
    float imaginary;
    Complex(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print() {
        if (imaginary < 0) {
            cout << real << " - " << -imaginary << "i" << endl;
        }
        else {
            cout << real << " + " << imaginary << "i" << endl;
        }
        // cout << real << (imaginary < 0 ? " - " : " + ") << abs(imaginary) << "i" << endl;
    }
    void add(Complex c) {
        real = real + c.real;
        imaginary = imaginary + c.imaginary;
    }
    void subtract(Complex c) {
        real = real - c.real;
        imaginary = imaginary - c.imaginary;
    }
    void multiply(Complex c) {
        float temp_real = real;

        real = temp_real * c.real - imaginary * c.imaginary;
        imaginary = temp_real * c.imaginary + imaginary * c.real;
    }
    void divide(Complex c) {
        Fraction f(real, imaginary, c.real, c.imaginary);
    }
};
int main() {
    // Fix: Write code for Division.
    Complex c1(3, 7); // 3 + 7i
    Complex c2(2, 4); // 2 + 4i
    c1.print();
    // c1.add(c2);
    // c1.subtract(c2);
    c1.multiply(c2);
    // c1.divide(c2);
    c1.print();
}