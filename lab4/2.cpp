#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    double d;
    const double pi = 3.14;

    std::cout << "Введите диаметр окружности d: ";
    std::cin >> d;

    double L = pi * d;

    std::cout << "Длина окружности: " << L << std::endl;

    return 0;
}
