#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int day, month;
    const char *months[] = {"января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря"};

    std::cout << "Введите номер дня (от 1 до 31): ";
    std::cin >> day;

    std::cout << "Введите номер месяца (от 1 до 12): ";
    std::cin >> month;

    if (day >= 1 && day <= 31 && month >= 1 && month <= 12) {
        std::cout << "Дата в виде текста: " << day << " " << months[month - 1] << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
