#include <iostream>
#include <locale.h>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");

    const int N = 6; // Задайте размер массива

    int A[N];

    std::cout << "Введите элементы массива размера " << N << ": ";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Массив после преобразования: ";
    for (int i = 0; i < N / 2; ++i) {
        std::cout << A[i] << " " << A[N - 1 - i] << " ";
    }

    // Если N нечетное, добавим серединный элемент
    if (N % 2 != 0) {
        std::cout << A[N / 2];
    }

    std::cout << std::endl;

    return 0;
}
