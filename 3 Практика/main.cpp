#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

void printMatrix(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i + 1) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }
}

char* swapWords(const char* input) {
    size_t length = strlen(input);
    char* output = new char[length + 1];
    strcpy(output, input);

    char* zeroPos = strstr(output, "Zero");
    char* nullPos = strstr(output, "Null");

    if (zeroPos && nullPos) {
        char temp[5]; 
        strncpy(temp, zeroPos, 4);
        temp[4] = '\0'; 

        strncpy(zeroPos, nullPos, 4); 
        strncpy(nullPos, temp, 4); 
    }

    return output;
}

// Задание 3: Структура для локальной сети
struct LocalNetwork {
    string name;
    int cost;
};

int main() {
    // Задание 1
    int size = 8; 
    printMatrix(size);

    // Задание 2
    const char* original = "Zero Two Null";
    char* transformed = swapWords(original);
    cout << "Исходная строка: " << original << endl;
    cout << "Преобразованная строка: " << transformed << endl;
    delete[] transformed; 

    // Задание 3
    LocalNetwork networks[3] = {
        {"Сеть A", 1000},
        {"Сеть B", 1500},
        {"Сеть C", 1200}
    };

    // Запись в файл
    ofstream outFile("networks.txt");
    if (outFile.is_open()) {
        for (const auto& network : networks) {
            outFile << "Имя: " << network.name << ", Стоимость: " << network.cost << endl;
        }
        outFile.close();
        cout << "Данные о локальных сетях записаны в файл networks.txt." << endl;
    }

    int minCost = networks[0].cost;
    for (const auto& network : networks) {
        if (network.cost < minCost) {
            minCost = network.cost;
        }
    }
    cout << "Минимальная стоимость монтажа: " << minCost << endl;

    return 0;
}
