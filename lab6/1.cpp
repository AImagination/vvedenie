#include <iostream>

int main() {
    int A, B;
    std::cout << "Введите значение переменной A: ";
    std::cin >> A;
    std::cout << "Введите значение переменной B: ";
    std::cin >> B;

    // Обмен значениями с использованием временной переменной
    int temp = A;
    A = B;
    B = temp;

    std::cout << "Новое значение A: " << A << std::endl;
    std::cout << "Новое значение B: " << B << std::endl;

    return 0;
}
