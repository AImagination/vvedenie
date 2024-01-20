#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int a, b, c;
    std::cout << "Введите три целых числа a, b и c (стороны треугольника): ";
    std::cin >> a >> b >> c;

    bool statement = (a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b);
    
    std::cout << "Высказывание \"Треугольник со сторонами a, b, c является прямоугольным\": " << std::boolalpha << statement << std::endl;

    return 0;
}
