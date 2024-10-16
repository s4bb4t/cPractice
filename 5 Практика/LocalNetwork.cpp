#include "LocalNetwork.h"

LocalNetwork::LocalNetwork(string name, double cost)
    : networkName(name), installationCost(cost) {}

void LocalNetwork::showDetails() {
    cout << "Сеть: " << networkName << endl;
    cout << "Стоимость монтажа: " << installationCost << " рублей" << endl;
}

PeerToPeerNetwork::PeerToPeerNetwork(string name, double cost, int nodes)
    : LocalNetwork(name, cost), numberOfNodes(nodes) {
    description = "Одноранговая сеть: все узлы равны и могут выступать как клиент и сервер.";
}

void PeerToPeerNetwork::showDetails() {
    LocalNetwork::showDetails();
    cout << "Тип сети: " << description << endl;
    cout << "Количество узлов: " << numberOfNodes << endl;
}

double PeerToPeerNetwork::calculateInstallationCost() {
    return installationCost + numberOfNodes * 500;
}

ClientServerNetwork::ClientServerNetwork(string name, double cost, int clients)
    : LocalNetwork(name, cost), numberOfClients(clients) {
    description = "Сеть типа клиент-сервер: один сервер обслуживает несколько клиентов.";
}

void ClientServerNetwork::showDetails() {
    LocalNetwork::showDetails();
    cout << "Тип сети: " << description << endl;
    cout << "Количество клиентов: " << numberOfClients << endl;
}

double ClientServerNetwork::calculateInstallationCost() {
    return installationCost + numberOfClients * 800;
}
