#include <iostream>

int main() {
    double xA, xB, xC;
    std::cout << "Введите координаты точки A: ";
    std::cin >> xA;
    std::cout << "Введите координаты точки B: ";
    std::cin >> xB;
    std::cout << "Введите координаты точки C: ";
    std::cin >> xC;

    double lengthAC = std::abs(xC - xA);
    double lengthBC = std::abs(xC - xB);
    double sumOfLengths = lengthAC + lengthBC;

    std::cout << "Длина отрезка AC: " << lengthAC << std::endl;
    std::cout << "Длина отрезка BC: " << lengthBC << std::endl;
    std::cout << "Сумма длин отрезков AC и BC: " << sumOfLengths << std::endl;

    return 0;
}
