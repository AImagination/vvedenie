#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int year;
    std::cout << "Введите номер года: ";
    std::cin >> year;

    if (year >= 1984) {
        const char *colors[] = {"зеленый", "красный", "желтый", "белый", "черный"};
        const char *animals[] = {"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};

        int colorIndex = (year - 1984) / 60 % 5;
        int animalIndex = (year - 1984) % 12;

        std::cout << "Год " << colors[colorIndex] << " " << animals[animalIndex] << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
