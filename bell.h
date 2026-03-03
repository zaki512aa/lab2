#ifndef BELL_H
#define BELL_H

// класс звонка
class Bell {
private:
    // флаг для переключения звука
    bool is_ding;

public:
    // конструктор и деструктор
    Bell();
    ~Bell();

    // метод вызова звука
    void sound();
};

#endif