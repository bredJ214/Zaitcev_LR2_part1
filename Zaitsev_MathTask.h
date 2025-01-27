#ifndef SURNAME_MATHTASK_H
#define SURNAME_MATHTASK_H

#include <cstring>
#include <string>

// Проверка корректности вводимых данных
bool UserInput(const std::string& input) {
    // Если строка пустая - ввод некорректен
    if (input.empty()) return false;

    // Попытаться преобразовать введенного значения в тип int
    try {
        // Преобразование введенного значения в тип int
        std::stoi(input);
        // Если преобразование успешно, возвращаем true
        return true;
    } catch (...) {
        // Если возникла ошибка в блоке try, возвращаем false
        return false;
    }
}

// Вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif // SURNAME_MATHTASK_H
