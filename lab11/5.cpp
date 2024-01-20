#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int num;
    std::cout << "Введите целое число: ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "Нулевое число" << std::endl;
    } else if (num > 0) {
        std::cout << "Положительное ";
    } else {
        std::cout << "Отрицательное ";
    }

    if (num % 2 == 0) {
        std::cout << "четное число" << std::endl;
    } else {
        std::cout << "нечетное число" << std::endl;
    }

    return 0;
}
