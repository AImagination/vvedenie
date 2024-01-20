#include <iostream>
#include <locale.h>

double Fact2(int N) {
    double result = 1.0;

    for (int i = N % 2 == 0 ? 2 : 1; i <= N; i += 2) {
        result *= i;
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    if (N > 0) {
        double doubleFactorial = Fact2(N);
        std::cout << "Двойной факториал числа " << N << "!!: " << doubleFactorial << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
