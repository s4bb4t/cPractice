#include <iostream>
#include "LocalNetwork.h"

int main() {
    PeerToPeerNetwork p2p("Сеть 1", 2000, 10);
    ClientServerNetwork c2s("Сеть 2", 3000, 5);

    cout << "Детали одноранговой сети:" << endl;
    p2p.showDetails();
    cout << "Итоговая стоимость монтажа: " << p2p.calculateInstallationCost() << " рублей" << endl;

    cout << endl;

    cout << "Детали сети типа клиент-сервер:" << endl;
    c2s.showDetails();
    cout << "Итоговая стоимость монтажа: " << c2s.calculateInstallationCost() << " рублей" << endl;

    return 0;
}
