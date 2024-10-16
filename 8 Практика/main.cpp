#include <iostream>
#include <vector>
#include "LocalNetwork.h"

using namespace std;

int main() {
    vector<LocalNetwork*> networks;

    networks.push_back(new PeerToPeerNetwork("Сеть A", 10000, 10));
    networks.push_back(new ClientServerNetwork("Сеть B", 15000, 5));
    networks.push_back(new PeerToPeerNetwork("Сеть C", 8000, 8));
    networks.push_back(new ClientServerNetwork("Сеть D", 20000, 15));
    networks.push_back(new PeerToPeerNetwork("Сеть E", 12000, 12));

    for (const auto& network : networks) {
        network->showDetails();
        cout << "Общая стоимость установки: " << network->calculateInstallationCost() << " рублей" << endl << endl;
    }

    for (auto& network : networks) {
        delete network; 
    }
    networks.clear();

    return 0;
}
