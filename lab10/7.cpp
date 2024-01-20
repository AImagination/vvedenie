#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int a, b, c;
    std::cout << "Введите три целых числа a, b и c (стороны треугольника): ";
    std::cin >> a >> b >> c;

    bool statement = (a + b > c) && (b + c > a) && (c + a > b);

    std::cout << "Высказывание \"Существует треугольник со сторонами a, b, c\": " << std::boolalpha << statement << std::endl;

    return 0;
}
