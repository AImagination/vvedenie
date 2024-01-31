#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    double a, b;
    std::cout << "Введите стороны прямоугольника a и b: ";
    std::cin >> a >> b;

    double S = a * b;
    double P = 2 * (a + b);

    std::cout << "Площадь прямоугольника: " << S << std::endl;
    std::cout << "Периметр прямоугольника: " << P << std::endl;

    return 0;
}
