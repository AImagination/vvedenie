#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите два целых числа A и B: ";
    std::cin >> A >> B;

    if (A != B) {
        int maxVal = (A > B) ? A : B;
        A = maxVal;
        B = maxVal;
    } else {
        A = 0;
        B = 0;
    }

    std::cout << "Новые значения переменных A и B: " << A << " " << B << std::endl;

    return 0;
}
