#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    // Вычисление значения функции y = 4(x-3)^6 - 7(x-3)^3 + 2
    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

    std::cout << "Значение функции y: " << y << std::endl;

    return 0;
}
