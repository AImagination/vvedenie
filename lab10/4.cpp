#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int threeDigitNumber;
    std::cout << "Введите трехзначное число: ";
    std::cin >> threeDigitNumber;

    int firstDigit = threeDigitNumber / 100;
    int secondDigit = (threeDigitNumber / 10) % 10;
    int thirdDigit = threeDigitNumber % 10;

    bool statement = (firstDigit < secondDigit && secondDigit < thirdDigit) ||
                     (firstDigit > secondDigit && secondDigit > thirdDigit);

    std::cout << "Высказывание \"Цифры данного числа образуют возрастающую или убывающую последовательность\": " << std::boolalpha << statement << std::endl;

    return 0;
}
