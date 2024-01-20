#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int num;
    std::cout << "Введите количество учебных заданий (от 10 до 40): ";
    std::cin >> num;

    if (num >= 10 && num <= 40) {
        const char *units[] = {"", "одно", "две", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
        const char *description;

        if (num <= 9) {
            description = units[num];
        } else {
            description = "много";
        }

        std::cout << "Строка-описание количества заданий: " << description << " учебных заданий" << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
