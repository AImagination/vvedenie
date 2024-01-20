#include <iostream>
#include <locale.h>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");

    int N, A, B;
    std::cout << "Введите целое число N (> 2): ";
    std::cin >> N;

    if (N <= 2) {
        std::cout << "Некорректные данные" << std::endl;
        return 1;
    }

    std::cout << "Введите первый элемент A: ";
    std::cin >> A;

    std::cout << "Введите второй элемент B: ";
    std::cin >> B;

    std::vector<int> resultArray;
    resultArray.push_back(A);
    resultArray.push_back(B);

    for (int i = 2; i < N; ++i) {
        resultArray.push_back(resultArray[i - 1] + resultArray[i - 2]);
    }

    std::cout << "Массив размера " << N << " сформирован." << std::endl;
    std::cout << "Элементы массива: ";
    for (int element : resultArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
