#include <iostream>
using namespace std;

template <typename T>
T calculateMinCost(T costs[], int size) {
    T minCost = costs[0];
    for (int i = 1; i < size; i++) {
        if (costs[i] < minCost) {
            minCost = costs[i];
        }
    }
    return minCost;
}

template <typename T>
int countComputers(T computers[], int size) {
    return size;
}

int main() {
    double installationCosts[] = {150.5, 200.75, 100.0, 250.25, 120.0};
    int sizeCosts = sizeof(installationCosts) / sizeof(installationCosts[0]);

    int computersInNetwork[] = {1, 2, 3, 4, 5};
    int sizeComputers = sizeof(computersInNetwork) / sizeof(computersInNetwork[0]);

    double minCost = calculateMinCost(installationCosts, sizeCosts);
    cout << "Минимальная стоимость монтажа: " << minCost << endl;

    int computerCount = countComputers(computersInNetwork, sizeComputers);
    cout << "Количество компьютеров в сети: " << computerCount << endl;

    return 0;
}
