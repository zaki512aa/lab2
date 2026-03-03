#ifndef COMPLEKS_H
#define COMPLEKS_H

// класс комплексного числа
class Complex {
private:
    // действительная и мнимая части
    double re;
    double im;

public:
    // конструкторы
    Complex();
    Complex(double x, double y);

    // методы установки и получения значений
    void SetRe(double r);
    void SetIm(double i);
    double GetRe() const;
    double GetIm() const;

    // вычисление модуля и аргумента
    double Abs();
    double Arg();

    // методы вывода в разных форматах
    void Print();
    void TrigPrint();
    void ExpPrint();

    // арифметические операции
    Complex Add(Complex z);
    Complex Sub(Complex z);
    Complex Mult(Complex z);
    Complex Div(Complex z);
};

#endif