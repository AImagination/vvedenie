#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int threeDigitNumber;
    std::cout << "Введите трехзначное число: ";
    std::cin >> threeDigitNumber;

    int rearrangedNumber = (threeDigitNumber % 100) * 10 + threeDigitNumber / 100;
    std::cout << "Полученное число после операции: " << rearrangedNumber << std::endl;

    return 0;
}
