#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    std::cout << "Введите количество секунд с начала суток (N): ";
    std::cin >> N;

    int secondsInLastMinute = N % 60;
    std::cout << "Секунд с начала последней минуты: " << secondsInLastMinute << std::endl;

    return 0;
}
