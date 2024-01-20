#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int twoDigitNumber;
    std::cout << "Введите двузначное число: ";
    std::cin >> twoDigitNumber;

    int reversedNumber = (twoDigitNumber % 10) * 10 + twoDigitNumber / 10;
    std::cout << "Число после перестановки цифр: " << reversedNumber << std::endl;

    return 0;
}
