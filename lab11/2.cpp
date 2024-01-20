#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B, C;
    std::cout << "Введите три числа A, B и C: ";
    std::cin >> A >> B >> C;

    int sumOfTwoLargest = (A >= B && A >= C) ? (A + ((B >= C) ? B : C)) : ((B >= A && B >= C) ? (B + ((A >= C) ? A : C)) : (C + ((A >= B) ? A : B)));

    std::cout << "Сумма двух наибольших чисел: " << sumOfTwoLargest << std::endl;

    return 0;
}
