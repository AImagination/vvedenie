#include <iostream>

int main() {
    double A1, B1, C1, A2, B2, C2;
    double x, y;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите коэффициенты A1, B1, C1 для уравнения A1*x + B1*y = C1: ";
    std::cin >> A1 >> B1 >> C1;
    std::cout << "Введите коэффициенты A2, B2, C2 для уравнения A2*x + B2*y = C2: ";
    std::cin >> A2 >> B2 >> C2;

    // Решение системы уравнений
    double determinant = A1 * B2 - A2 * B1;

    if (determinant != 0) {
        x = (C1 * B2 - C2 * B1) / determinant;
        y = (A1 * C2 - A2 * C1) / determinant;

        std::cout << "Решение системы уравнений:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    } else {
        std::cout << "Система уравнений не имеет решения (определитель равен 0)." << std::endl;
    }

    return 0;
}
