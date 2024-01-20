#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите положительные числа A и B (A > B): ";
    std::cin >> A >> B;

    if (A > B) {
        int remainder = A % B;
        std::cout << "Длина незанятой части отрезка A: " << remainder << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
