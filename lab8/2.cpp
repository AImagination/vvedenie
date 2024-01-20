#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите целое положительное число A: ";
    std::cin >> A;
    std::cout << "Введите целое положительное число B (B < A): ";
    std::cin >> B;

    int countOfSegments = A / B;
    std::cout << "Количество отрезков B на отрезке A: " << countOfSegments << std::endl;

    return 0;
}
