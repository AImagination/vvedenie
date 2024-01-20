#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    std::cout << "Введите целое число N (> 1), являющееся числом Фибоначчи: ";
    std::cin >> N;

    if (N > 1) {
        int a = 0;
        int b = 1;
        int K = 2;

        while (b != N) {
            int temp = b;
            b = a + b;
            a = temp;
            ++K;
        }

        std::cout << "Порядковый номер числа Фибоначчи N: " << K << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
