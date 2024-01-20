#include <iostream>
#include <locale.h>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Некорректные данные" << std::endl;
        return 1;
    }

    std::vector<int> oddNumbers;
    for (int i = 1; i <= 2 * N; i += 2) {
        oddNumbers.push_back(i);
    }

    std::cout << "Массив первых " << N << " положительных нечетных чисел: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
