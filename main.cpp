#include <iostream>
#include "bell.h"
#include "oddeven.h"
#include "compleks.h"
#include "stock.h"

using namespace std;

int main() {
    // задание 1 класс звонок
    cout << "=== zadanie 1: bell ===" << endl;
    Bell bell;
    bell.sound(); // выведет ding
    bell.sound(); // выведет dong
    bell.sound(); // выведет ding
    cout << endl;

    // задание 2 разделитель чисел
    cout << "=== zadanie 2: odd even ===" << endl;
    OddEvenSeparator separator;
    separator.add_number(1);
    separator.add_number(2);
    separator.add_number(5);
    separator.add_number(6);
    separator.add_number(8);
    separator.add_number(3);
    
    separator.even(); // выведет 2 6 8
    separator.odd();  // выведет 1 5 3
    cout << endl;

    // задание 4 комплексные числа
    cout << "=== zadanie 4: complex ===" << endl;
    Complex c1(3, 4);
    Complex c2(1, -2);
    
    cout << "chislo c1: "; c1.Print();
    cout << "chislo c2: "; c2.Print();
    
    cout << "summa: ";
    c1.Add(c2).Print();
    
    cout << "umnozhenie: ";
    c1.Mult(c2).Print();
    
    cout << "trigonometricheskaya forma c1: ";
    c1.TrigPrint();
    cout << endl;

    // задание 5 склад коробок
    cout << "=== zadanie 5: stock ===" << endl;
    Stock stock;
    
    // добавляем коробки
    // коробка 0 вес 10 объем 20
    stock.Add(10, 20); 
    // коробка 1 вес 50 объем 100
    stock.Add(50, 100); 
    // коробка 2 вес 10 объем 20 новее чем первая
    stock.Add(10, 20); 
    
    // ищем коробку с весом больше 40
    // подходит только коробка 1
    int id1 = stock.GetByW(40);
    cout << "korobka s vesom >= 40: id = " << id1 << endl;

    // ищем коробку с весом больше 10
    // подходят 0 и 2 но 2 новее и пролежала меньше
    int id2 = stock.GetByW(10);
    cout << "korobka s vesom >= 10: id = " << id2 << endl;

    // ищем коробку с объемом больше 20
    // осталась только коробка 0 так как 1 и 2 забрали
    int id3 = stock.GetByV(20);
    cout << "korobka s obyemom >= 20: id = " << id3 << endl;

    // пробуем найти несуществующую коробку
    int id4 = stock.GetByW(1000);
    cout << "net takoy korobki: id = " << id4 << endl;

    return 0;
}