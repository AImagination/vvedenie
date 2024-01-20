#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    const double initialDeposit = 1000.0;
    double P;
    std::cout << "Введите процент P (0 < P < 25): ";
    std::cin >> P;

    if (P > 0 && P < 25) {
        const double targetAmount = 1100.0;
        double currentAmount = initialDeposit;
        int months = 0;

        while (currentAmount < targetAmount) {
            currentAmount += currentAmount * (P / 100);
            ++months;
        }

        std::cout << "Через " << months << " месяцев размер вклада превысит 1100 руб. (S = "
                  << currentAmount << " руб.)" << std::endl;
    } else {
        std::cout << "Некорректные данные" << std::endl;
    }

    return 0;
}
