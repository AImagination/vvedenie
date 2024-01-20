#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int num;
    std::cout << "Введите трехзначное число (от 100 до 999): ";
    std::cin >> num;

    if (num >= 100 && num <= 999) {
        const char *units[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
        const char *tens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
        const char *hundreds[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};

        int unit = num % 10;
        int ten = (num / 10) % 10;
        int hundred = num / 100;

        std::cout << "Строка-описание числа: " << hundreds[hundred] << " " << tens[ten] << " " << units[unit] << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
