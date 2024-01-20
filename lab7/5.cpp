#include <iostream>

int main() {
    double A, B, x;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите значение коэффициента A: ";
    std::cin >> A;
    std::cout << "Введите значение коэффициента B: ";
    std::cin >> B;

    // Решение линейного уравнения A * x + B = 0
    if (A != 0) {
        x = -B / A;
        std::cout << "Решение уравнения " << A << " * x + " << B << " = 0: x = " << x << std::endl;
    } else {
        std::cout << "Коэффициент A не может быть равен 0. Уравнение не является линейным." << std::endl;
    }

    return 0;
}
