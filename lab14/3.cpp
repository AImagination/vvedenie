#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    std::cout << "Введите целое число N (> 1): ";
    std::cin >> N;

    if (N > 1) {
        int sum = 0;
        int K = 1;

        while (sum < N) {
            sum += K;
            ++K;
        }

        std::cout << "Наименьшее K: " << K << ", Сумма: " << sum << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
