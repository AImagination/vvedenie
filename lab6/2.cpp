#include <iostream>

int main() {
    int A, B, C;
    std::cout << "Введите значение переменной A: ";
    std::cin >> A;
    std::cout << "Введите значение переменной B: ";
    std::cin >> B;
    std::cout << "Введите значение переменной C: ";
    std::cin >> C;

    // Перестановка значений переменных
    int temp = A;
    A = B;
    B = C;
    C = temp;

    std::cout << "Новое значение A: " << A << std::endl;
    std::cout << "Новое значение B: " << B << std::endl;
    std::cout << "Новое значение C: " << C << std::endl;

    return 0;
}
