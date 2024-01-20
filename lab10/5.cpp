#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int fourDigitNumber;
    std::cout << "Введите четырехзначное число: ";
    std::cin >> fourDigitNumber;

    int firstDigit = fourDigitNumber / 1000;
    int secondDigit = (fourDigitNumber / 100) % 10;
    int thirdDigit = (fourDigitNumber / 10) % 10;
    int fourthDigit = fourDigitNumber % 10;

    bool statement = (firstDigit == fourthDigit) && (secondDigit == thirdDigit);

    std::cout << "Высказывание \"Данное число читается одинаково слева направо и справа налево\": " << std::boolalpha << statement << std::endl;

    return 0;
}
