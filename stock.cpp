#include "stock.h"
#include <iostream>

Stock::Stock() {
    current_id = 0;
}

Stock::~Stock() {}

// метод добавления новой коробки
void Stock::Add(int w, int v) {
    // проверка на отрицательные значения
    if (w < 0 || v < 0) {
        return;
    }
    
    Box new_box;
    new_box.weight = w;
    new_box.volume = v;
    new_box.id = current_id++;
    
    // добавляем коробку в конец вектора
    boxes.push_back(new_box);
}

// поиск коробки по весу
int Stock::GetByW(int min_w) {
    // ищем с конца вектора чтобы найти самую новую коробку
    // так как в задании сказано выбрать ту что пролежала меньше
    for (int i = boxes.size() - 1; i >= 0; --i) {
        if (boxes[i].weight >= min_w) {
            int found_id = boxes[i].id;
            // удаляем коробку со склада
            boxes.erase(boxes.begin() + i);
            return found_id;
        }
    }
    // если коробка не найдена
    return -1;
}

// поиск коробки по объему
int Stock::GetByV(int min_v) {
    // также ищем с конца чтобы найти самую свежую
    for (int i = boxes.size() - 1; i >= 0; --i) {
        if (boxes[i].volume >= min_v) {
            int found_id = boxes[i].id;
            // удаляем найденную коробку
            boxes.erase(boxes.begin() + i);
            return found_id;
        }
    }
    return -1;
}