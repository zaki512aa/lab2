#ifndef ODDEVEN_H
#define ODDEVEN_H

#include <vector>

using std::vector;

// класс разделитель четных и нечетных чисел
class OddEvenSeparator {
private:
    // хранилище для четных чисел
    vector<int> evens;
    // хранилище для нечетных чисел
    vector<int> odds;

public:
    OddEvenSeparator();
    ~OddEvenSeparator();

    // метод добавления числа
    void add_number(int num);
    // вывод четных чисел
    void even();
    // вывод нечетных чисел
    void odd();
};

#endif