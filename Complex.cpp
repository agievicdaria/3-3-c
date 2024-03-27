#include "Complex.h"
#include <sstream>
using namespace std;

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex::Complex() : real(0.0), imaginary(0.0) {}

Complex::Complex(const Complex& number) : real(number.real), imaginary(number.imaginary) {}

Complex::~Complex() {}


Complex operator+(const Complex& first, const Complex& second) {
    return Complex(first.real + second.real, first.imaginary + second.imaginary);
}

Complex operator*(const Complex& first, const Complex& second) {
    return Complex(first.real * second.real - first.imaginary * second.imaginary, 
                   first.real * second.imaginary + first.imaginary * second.real);
}

bool operator==(const Complex& first, const Complex& second) {
    return (first.real == second.real) && (first.imaginary == second.imaginary);
}

Complex& Complex::operator++() {
    real++;
    return *this;
}

Complex Complex::operator++(int) {
    Complex c(*this);
    real++;
    return c;
}

Complex& Complex::operator--() {
    real--;
    return *this;
}

Complex Complex::operator--(int) {
    Complex c(*this);
    real--;
    return c;
}

ostream& operator<<(ostream& out, const Complex& obj) {
    out << "(" << obj.real << ", " << obj.imaginary << ")";
    return out;
}

istream& operator>>(istream& in, Complex& obj) {
    cout << "Enter real part: ";
    in >> obj.real;
    cout << "Enter imaginary part: ";
    in >> obj.imaginary;
    return in;
}
