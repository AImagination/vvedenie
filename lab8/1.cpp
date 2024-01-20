#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");

    unsigned long long fileSizeInBytes;
    std::cout << "Введите размер файла в байтах: ";
    std::cin >> fileSizeInBytes;

    unsigned long long fileSizeInKilobytes = fileSizeInBytes / 1024;
    std::cout << "Размер файла в килобайтах: " << fileSizeInKilobytes << " КБ" << std::endl;

    return 0;
}
