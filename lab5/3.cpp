#include <iostream>

int main() {
    double xA, xB, xC;
    std::cout << "Введите координаты точки A: ";
    std::cin >> xA;
    std::cout << "Введите координаты точки B: ";
    std::cin >> xB;
    std::cout << "Введите координаты точки C (между A и B): ";
    std::cin >> xC;

    double lengthAC = std::abs(xC - xA);
    double lengthBC = std::abs(xC - xB);
    double productOfLengths = lengthAC * lengthBC;

    std::cout << "Произведение длин отрезков AC и BC: " << productOfLengths << std::endl;

    return 0;
}
