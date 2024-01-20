#include <iostream>
#include <cmath>

int main() {
    double alphaRadians, alphaDegrees;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите значение угла в радианах (0 < alpha < 2*pi): ";
    std::cin >> alphaRadians;

    // Перевод из радиан в градусы: градус = радиан * (180 / π)
    alphaDegrees = alphaRadians * (180 / M_PI);

    std::cout << "Значение угла в градусах: " << alphaDegrees << std::endl;

    return 0;
}
