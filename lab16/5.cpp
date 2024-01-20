#include <iostream>
#include <locale.h>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");

    const int N = 8; // Задайте размер массива

    int A[N];

    std::cout << "Введите элементы массива размера " << N << ": ";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Элементы с нечетными номерами в порядке возрастания: ";
    for (int i = 0; i < N; i += 2) {
        std::cout << A[i] << " ";
    }

    std::cout << "\nЭлементы с четными номерами в порядке убывания: ";
    for (int i = N - 1; i > 0; i -= 2) {
        std::cout << A[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
