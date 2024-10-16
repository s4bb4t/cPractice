#include <iostream>
#include "operations.h"

int main() {
    double num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Сложение: " << add(num1, num2) << std::endl;
    std::cout << "Вычитание: " << subtract(num1, num2) << std::endl;
    std::cout << "Умножение: " << multiply(num1, num2) << std::endl;

    try {
        std::cout << "Деление: " << divide(num1, num2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
