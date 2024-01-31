#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    double a, b;
    std::cout << "Введите два числа a и b: ";
    std::cin >> a >> b;

    double average = (a + b) / 2;

    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
