#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    char direction;
    int command;

    std::cout << "Введите исходное направление робота (С, З, Ю, В): ";
    std::cin >> direction;

    std::cout << "Введите целое число команды (0 - продолжить, 1 - поворот налево, -1 - поворот направо): ";
    std::cin >> command;

    if ((direction == 'С' || direction == 'З' || direction == 'Ю' || direction == 'В') &&
        (command == 0 || command == 1 || command == -1)) {
        const char *directions[] = {"С", "В", "Ю", "З"};
        int index = -1;

        if (direction == 'С') {
            index = 0;
        } else if (direction == 'В') {
            index = 1;
        } else if (direction == 'Ю') {
            index = 2;
        } else if (direction == 'З') {
            index = 3;
        }

        index = (index + command + 4) % 4;
        std::cout << "Направление робота после выполнения команды: " << directions[index] << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
