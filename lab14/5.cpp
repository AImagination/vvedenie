#include <iostream>
#include <locale.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите целые положительные числа A и B: ";
    std::cin >> A >> B;

    if (A > 0 && B > 0) {
        int result = gcd(A, B);
        std::cout << "Наибольший общий делитель A и B: " << result << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
