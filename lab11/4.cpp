#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    double x, y;
    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;

    if (x > 0 && y > 0) {
        std::cout << "Точка находится в I координатной четверти" << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "Точка находится в II координатной четверти" << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "Точка находится в III координатной четверти" << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "Точка находится в IV координатной четверти" << std::endl;
    } else {
        std::cout << "Точка лежит на координатных осях" << std::endl;
    }

    return 0;
}
