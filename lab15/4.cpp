#include <iostream>
#include <locale.h>

int Quarter(double x, double y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else {
        return 0; // точка лежит на оси или в начале координат
    }
}

int main() {
    setlocale(LC_ALL, "ru");

    double coordinates[][2] = {{2.0, 3.5}, {-1.5, 4.0}, {-3.0, -2.5}};
    int quarter;

    for (int i = 0; i < 3; ++i) {
        quarter = Quarter(coordinates[i][0], coordinates[i][1]);
        std::cout << "Точка с координатами (" << coordinates[i][0] << ", " << coordinates[i][1]
                  << ") находится в координатной четверти: " << quarter << std::endl;
    }

    return 0;
}
