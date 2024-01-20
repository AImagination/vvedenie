#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int num;
    std::cout << "Введите целое число в диапазоне 1-999: ";
    std::cin >> num;

    if (num >= 10 && num <= 99) {
        std::cout << "Двузначное ";
    } else if (num >= 100 && num <= 999) {
        std::cout << "Трехзначное ";
    } else {
        std::cout << "Число не соответствует диапазону" << std::endl;
        return 0;
    }

    if (num % 2 == 0) {
        std::cout << "четное число" << std::endl;
    } else {
        std::cout << "нечетное число" << std::endl;
    }

    return 0;
}
