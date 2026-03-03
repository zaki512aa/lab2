#include <iostream>
#include "bell.h"

using std::cout;
using std::endl;

// конструктор инициализирует начальное состояние
Bell::Bell() {
    is_ding = true;
}

Bell::~Bell() {}

// реализация звука
void Bell::sound() {
    if (is_ding) {
        cout << "ding" << endl;
    } else {
        cout << "dong" << endl;
    }
    // меняем звук на противоположный
    is_ding = !is_ding;
}