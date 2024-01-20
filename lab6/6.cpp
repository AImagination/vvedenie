#include <iostream>

int main() {
    double A, result;

    std::cout << "Введите значение A: ";
    std::cin >> A;

    // Вычисление A^8 с использованием вспомогательной переменной
    double A2 = A * A;
    double A4 = A2 * A2;
    double A8 = A4 * A4;
    result = A8;

    std::cout << "A в восьмой степени: " << result << std::endl;

    return 0;
}
