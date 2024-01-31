#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    double a, b;
    std::cout << "Введите два ненулевых числа a и b: ";
    std::cin >> a >> b;

    double sum = a * a + b * b;
    double difference = a * a - b * b;
    double product = a * a * b * b;
    double quotient = (a * a) / (b * b);

    std::cout << "Сумма квадратов: " << sum << std::endl;
    std::cout << "Разность квадратов: " << difference << std::endl;
    std::cout << "Произведение квадратов: " << product << std::endl;
    std::cout << "Частное квадратов: " << quotient << std::endl;

    return 0;
}
