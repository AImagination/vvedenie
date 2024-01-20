#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int year;
    std::cout << "Введите номер года: ";
    std::cin >> year;

    int century = (year - 1) / 100 + 1;
    std::cout << "Соответствующий году номер столетия: " << century << std::endl;

    return 0;
}
