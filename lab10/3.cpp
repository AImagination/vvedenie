#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int number;
    std::cout << "Введите целое положительное число: ";
    std::cin >> number;

    bool statement = (number > 9) && (number < 100) && (number % 2 == 0);
    std::cout << "Высказывание \"Данное число является четным двузначным\": " << std::boolalpha << statement << std::endl;

    return 0;
}
