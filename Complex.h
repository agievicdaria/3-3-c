#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Complex : public Object {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i);
    Complex();
    Complex(const Complex& number);
    ~Complex();

    double getReal() const {return real;}
    double getImaginary() const {return imaginary;}
    void setReal(double value) {real = value;}
    void setImaginary(double value) {imaginary = value;}

    friend Complex operator+(const Complex& first, const Complex& second);
    friend Complex operator*(const Complex& first, const Complex& second);
    friend bool operator==(const Complex& first, const Complex& second);
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);
    friend ostream& operator<<(ostream& out, const Complex& obj);
    friend istream& operator>>(istream& in, Complex& obj);
};

