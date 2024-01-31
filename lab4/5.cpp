#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");

    double a, b;
    std::cout << "Введите два ненулевых числа a и b: ";
    std::cin >> a >> b;

    double sum = std::abs(a) + std::abs(b);
    double difference = std::abs(a) - std::abs(b);
    double product = std::abs(a) * std::abs(b);
    double quotient = std::abs(a) / std::abs(b);

    std::cout << "Сумма модулей: " << sum << std::endl;
    std::cout << "Разность модулей: " << difference << std::endl;
    std::cout << "Произведение модулей: " << product << std::endl;
    std::cout << "Частное модулей: " << quotient << std::endl;

    return 0;
}
