#include <iostream>
#include <string>
#include "Zaitsev_MathTask.h"

using namespace std;

int main() {
    string str_input; // вспомогательная переменная

    // ввод ширины прямоугольника
    cout << "Input height A: ";
    getline(cin, str_input);
    // ввод значений в текстовом виде
    while (!UserInput(str_input)) {
        // если ввод некорректен (вводимое значение невозможно преобразовать в int)
        cout << "Input height A: ";
        // повторный ввод данных
        getline(cin, str_input);
    }

    // присвоение переменной NumberA преобразованного в тип int
    // правильно введенного текстового значения
    int NumberA = stoi(str_input);

    // ввод высоты прямоугольника
    cout << "Input weight B: ";
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "Input weight B: ";
        getline(cin, str_input);
    }

    // присвоение переменной NumberB преобразованного в тип int
    // правильно введенного текстового значения
    int NumberB = stoi(str_input);

    // вычисление площади прямоугольника
    int RectangleArea = CalcRectangleArea(NumberA, NumberB);
    // вывод значения площади
    cout << "Area of Rectangle is " << RectangleArea << endl;

    return 0;
}
