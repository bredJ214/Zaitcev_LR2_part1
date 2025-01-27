#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Zaitsev_MathTask.h" // подключение модуля с тестируемыми методами
#include <string> // Не забывайте подключить заголовочный файл для std::string

using namespace cute;
using namespace std; // Добавляем, чтобы не писать std:: перед string

void testCalcRectangleArea() {
    // входные значения
    int a = 3;
    int b = 5;
    // ожидаемый результат
    int expected = 15; 
    // получение значения с помощью тестируемого метода
    int actual = CalcRectangleArea(a, b);
    // сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Letter() {
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_NegativeValue() {
    string str = "-5";
    bool expected = true; 
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тесты для UserInput
void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    // Создаем тестовый набор
    suite s;
    // Добавляем тестовые функции в набор
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));
    // Создаем listener и runner
    ide_listener<> listener;
    makeRunner(listener)(s, "All Tests");
    return 0;
}
