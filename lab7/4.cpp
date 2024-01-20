#include <iostream>

int main() {
    double V1, V2, S, T;
    setlocale(LC_ALL, "ru");
    std::cout << "Введите скорость первого автомобиля (V1) в км/ч: ";
    std::cin >> V1;
    std::cout << "Введите скорость второго автомобиля (V2) в км/ч: ";
    std::cin >> V2;
    std::cout << "Введите расстояние между автомобилями (S) в км: ";
    std::cin >> S;
    std::cout << "Введите время движения (T) в часах: ";
    std::cin >> T;

    // Расстояние = (Скорость1 + Скорость2) * Время
    double distance = (V1 + V2) * T;

    std::cout << "Расстояние между автомобилями через " << T << " часов: " << distance << " км" << std::endl;

    return 0;
}
