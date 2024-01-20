#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int K;
    std::cout << "Введите номер дня года (K): ";
    std::cin >> K;

    int dayOfWeek = (K + 1) % 7;  // 1 января 2023 было понедельником (1 + 1) % 7 = 2 (вторник)
    std::cout << "Номер дня недели для " << K << "-го дня года: " << dayOfWeek << std::endl;

    return 0;
}
