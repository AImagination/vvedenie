#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите два целых числа A и B: ";
    std::cin >> A >> B;

    bool statement = (A > 2) && (B <= 3);
    std::cout << "Высказывание \"Справедливы неравенства A > 2 и B ≤ 3\": " << std::boolalpha << statement << std::endl;

    return 0;
}
