#include <iostream>
#include <cmath>
#include "compleks.h"

using std::cout;
using std::endl;

// конструктор по умолчанию обнуляет поля
Complex::Complex() : re(0), im(0) {}

// конструктор с параметрами
Complex::Complex(double x, double y) : re(x), im(y) {}

// сеттеры и геттеры
void Complex::SetRe(double r) { re = r; }
void Complex::SetIm(double i) { im = i; }
double Complex::GetRe() const { return re; }
double Complex::GetIm() const { return im; }

// вычисление модуля числа
double Complex::Abs() {
    return sqrt(re * re + im * im);
}

// вычисление аргумента через арктангенс
double Complex::Arg() {
    return atan2(im, re);
}

// обычный вывод алгебраической формы
void Complex::Print() {
    cout << re << (im >= 0 ? " + " : " - ") << std::abs(im) << "i" << endl;
}

// тригонометрическая форма вывода
void Complex::TrigPrint() {
    cout << Abs() << " * (cos " << Arg() << " + i*sin " << Arg() << ")" << endl;
}

// показательная форма вывода
void Complex::ExpPrint() {
    cout << Abs() << " * e^(i*" << Arg() << ")" << endl;
}

// сложение двух комплексных чисел
Complex Complex::Add(Complex z) {
    return Complex(re + z.re, im + z.im);
}

// вычитание двух комплексных чисел
Complex Complex::Sub(Complex z) {
    return Complex(re - z.re, im - z.im);
}

// умножение по формуле
Complex Complex::Mult(Complex z) {
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

// деление по формуле
Complex Complex::Div(Complex z) {
    double denom = z.re * z.re + z.im * z.im;
    return Complex((re * z.re + im * z.im) / denom, (im * z.re - re * z.im) / denom);
}