#include <iostream>
#include <cmath>

int main() {
    double alphaDegrees, alphaRadians;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите значение угла в градусах (0 < alpha < 360): ";
    std::cin >> alphaDegrees;

    // Перевод из градусов в радианы: радиан = градус * (π / 180)
    alphaRadians = alphaDegrees * (M_PI / 180);

    std::cout << "Значение угла в радианах: " << alphaRadians << std::endl;

    return 0;
}
