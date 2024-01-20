#include <iostream>
#include <locale.h>

void PowerA3(double A, double &B) {
    B = A * A * A;
}

int main() {
    setlocale(LC_ALL, "ru");

    double numbers[] = {2.0, 3.5, 1.8, -2.0, 0.5};
    double result;

    for (double num : numbers) {
        PowerA3(num, result);
        std::cout << "Третья степень числа " << num << ": " << result << std::endl;
    }

    return 0;
}
