#include <iostream>
#include <locale.h>

int Sign(double X) {
    if (X < 0) {
        return -1;
    } else if (X == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    double A, B;
    std::cout << "Введите два вещественных числа A и B: ";
    std::cin >> A >> B;

    int result = Sign(A) + Sign(B);
    std::cout << "Значение выражения Sign(A) + Sign(B): " << result << std::endl;

    return 0;
}
