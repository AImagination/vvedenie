#include <iostream>

int main() {
    double X, A, Y;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите количество конфет в кг (X): ";
    std::cin >> X;
    std::cout << "Введите стоимость конфет за X кг (A): ";
    std::cin >> A;
    std::cout << "Введите количество кг конфет (Y): ";
    std::cin >> Y;

    // Вычисление стоимости 1 кг конфет и Y кг конфет
    double costPerKg = A / X;
    double totalCost = costPerKg * Y;

    std::cout << "Стоимость 1 кг конфет: " << costPerKg << " рублей" << std::endl;
    std::cout << "Общая стоимость " << Y << " кг конфет: " << totalCost << " рублей" << std::endl;

    return 0;
}
