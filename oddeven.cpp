#include <iostream>
#include "oddeven.h"

using std::cout;
using std::endl;

OddEvenSeparator::OddEvenSeparator() {}
OddEvenSeparator::~OddEvenSeparator() {}

// добавление числа и распределение по векторам
void OddEvenSeparator::add_number(int num) {
    if (num % 2 == 0) {
        evens.push_back(num);
    } else {
        odds.push_back(num);
    }
}

// вывод всех четных чисел в строку
void OddEvenSeparator::even() {
    cout << "chetnye: ";
    for (int n : evens) {
        cout << n << " ";
    }
    cout << endl;
}

// вывод всех нечетных чисел в строку
void OddEvenSeparator::odd() {
    cout << "nechetnye: ";
    for (int n : odds) {
        cout << n << " ";
    }
    cout << endl;
}