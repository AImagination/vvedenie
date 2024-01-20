#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int A, B, C;
    std::cout << "Введите три целых числа A, B и C: ";
    std::cin >> A >> B >> C;

    bool statement = (A < B) && (B < C);
    std::cout << "Высказывание \"Справедливо двойное неравенство A < B < C\": " << std::boolalpha << statement << std::endl;

    return 0;
}
