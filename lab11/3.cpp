#include <iostream>
#include <cmath>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int xA, yA, xB, yB, xC, yC;
    std::cout << "Введите координаты точек A, B и C (xA yA xB yB xC yC): ";
    std::cin >> xA >> yA >> xB >> yB >> xC >> yC;

    double distanceAB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    double distanceAC = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

    if (distanceAB < distanceAC) {
        std::cout << "Точка B ближе к A, расстояние: " << distanceAB << std::endl;
    } else {
        std::cout << "Точка C ближе к A, расстояние: " << distanceAC << std::endl;
    }

    return 0;
}
