#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    // Вычисление значения функции y = 3x^6 - 6x^2 - 7
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    std::cout << "Значение функции y: " << y << std::endl;

    return 0;
}
