#include <iostream>

int main() {
    double x1, y1, x2, y2;
    std::cout << "Введите координаты вершины прямоугольника (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты противоположной вершины (x2 y2): ";
    std::cin >> x2 >> y2;

    double width = std::abs(x2 - x1);
    double height = std::abs(y2 - y1);
    double perimeter = 2 * (width + height);
    double area = width * height;

    std::cout << "Периметр прямоугольника: " << perimeter << std::endl;
    std::cout << "Площадь прямоугольника: " << area << std::endl;

    return 0;
}
