#include <iostream>

using namespace std;

void task1() {
    unsigned char a;  
    float b;         

    cout << "Введите значение для unsigned char (0-255): ";
    cin >> a;  
    cout << "Введите значение для float: ";
    cin >> b;       

    float sum = a + b;     
    int sumInt = static_cast<int>(sum);
    cout << "Сумма (int): " << sumInt << endl;

    cout << "Размер суммы (в байтах): " << sizeof(sum) << endl;
}

void task2() {
    double arr[5];   
    double positiveSum = 0;  

    cout << "Введите 5 элементов массива типа double:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
        if (arr[i] > 0) {
            positiveSum += arr[i];
        }
    }

    cout << "Сумма положительных элементов массива: " << positiveSum << endl;
}

int main() {
    task1();
    task2();

    return 0;
}
