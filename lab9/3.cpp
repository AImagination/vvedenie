#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int K, N;
    std::cout << "Введите номер дня года (K): ";
    std::cin >> K;
    std::cout << "Введите номер дня недели 1 января (N): ";
    std::cin >> N;

    int dayOfWeek = (K + N - 2) % 7 + 1;  // 1 января 2023 было вторником (2)
    std::cout << "Номер дня недели для " << K << "-го дня года: " << dayOfWeek << std::endl;

    return 0;
}
