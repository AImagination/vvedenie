#include <iostream>
#include <locale.h>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");

    int N, A, D;
    std::cout << "Введите целое число N (> 1): ";
    std::cin >> N;

    if (N <= 1) {
        std::cout << "Некорректные данные" << std::endl;
        return 1;
    }

    std::cout << "Введите первый член A геометрической прогрессии: ";
    std::cin >> A;

    std::cout << "Введите знаменатель D геометрической прогрессии: ";
    std::cin >> D;

    std::vector<int> geometricProgression;
    int currentTerm = A;

    for (int i = 0; i < N; ++i) {
        geometricProgression.push_back(currentTerm);
        currentTerm *= D;
    }

    std::cout << "Массив первых " << N << " членов геометрической прогрессии: ";
    for (int term : geometricProgression) {
        std::cout << term << " ";
    }
    std::cout << std::endl;

    return 0;
}
