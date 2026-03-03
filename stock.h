#ifndef STOCK_H
#define STOCK_H

#include <vector>

// структура коробки с весом объемом и номером
struct Box {
    int weight;
    int volume;
    int id;
};

// класс склад
class Stock {
private:
    // вектор для хранения коробок
    std::vector<Box> boxes;
    // счетчик для генерации уникальных номеров
    int current_id;

public:
    Stock();
    ~Stock();

    // добавить коробку
    void Add(int w, int v);
    // найти по минимальному весу
    int GetByW(int min_w);
    // найти по минимальному объему
    int GetByV(int min_v);
};

#endif