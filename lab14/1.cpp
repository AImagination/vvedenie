#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите целые положительные числа A и B (A < B): ";
    std::cin >> A >> B;

    if (A < B) {
        for (int i = A; i <= B; ++i) {
            for (int j = 0; j < i; ++j) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
