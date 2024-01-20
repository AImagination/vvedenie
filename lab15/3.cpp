#include <iostream>
#include <locale.h>

double RingS(double R1, double R2) {
    const double PI = 3.14159265358979323846;
    return PI * (R1 * R1 - R2 * R2);
}

int main() {
    setlocale(LC_ALL, "ru");

    double outerRadius[] = {5.0, 7.5, 10.0};
    double innerRadius[] = {2.0, 3.5, 5.0};
    double area;

    for (int i = 0; i < 3; ++i) {
        area = RingS(outerRadius[i], innerRadius[i]);
        std::cout << "Площадь кольца с внешним радиусом " << outerRadius[i]
                  << " и внутренним радиусом " << innerRadius[i] << ": " << area << std::endl;
    }

    return 0;
}
