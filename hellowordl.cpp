#include <iostream>

int main() {
    while (true) { 
        int num1, num2, result;
        char oper;

        num1 = Req();
        oper = ReqOperator();
        num2 = Req();

        switch (oper) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':

                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Ошибка: деление на ноль!" << std::endl;
                    continue;
                }
                break;
            default:
                std::cout << "Ошибка: некорректный оператор!" << std::endl;
                continue; 
        }
        std::cout << "Результат: " << result << std::endl;
    }

    return 0; 
}

int Req() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    return num;
}

char ReqOperator() {
    char oper;
    std::cout << "Введите знак арифметической операции (+, -, *, /): ";
    std::cin >> oper;
    return oper;
}