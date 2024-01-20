#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B, C;
    std::cout << "Введите размеры прямоугольника (A и B): ";
    std::cin >> A >> B;
    std::cout << "Введите размер квадрата (C): ";
    std::cin >> C;

    int squaresInRectangle = (A / C) * (B / C);
    int areaOfUnusedPart = A * B - squaresInRectangle * C * C;

    std::cout << "Количество квадратов на прямоугольнике: " << squaresInRectangle << std::endl;
    std::cout << "Площадь незанятой части прямоугольника: " << areaOfUnusedPart << std::endl;

    return 0;
}
