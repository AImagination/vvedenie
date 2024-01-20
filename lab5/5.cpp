#include <iostream>
#include <cmath>

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите координаты вершины A (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты вершины B (x2 y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты вершины C (x3 y3): ";
    std::cin >> x3 >> y3;

    double sideAB = calculateDistance(x1, y1, x2, y2);
    double sideBC = calculateDistance(x2, y2, x3, y3);
    double sideCA = calculateDistance(x3, y3, x1, y1);

    double perimeter = sideAB + sideBC + sideCA;

    // Используем формулу Герона для вычисления площади треугольника
    double halfPerimeter = perimeter / 2;
    double area = sqrt(halfPerimeter * (halfPerimeter - sideAB) * (halfPerimeter - sideBC) * (halfPerimeter - sideCA));

    std::cout << "Периметр треугольника: " << perimeter << std::endl;
    std::cout << "Площадь треугольника: " << area << std::endl;

    return 0;
}
