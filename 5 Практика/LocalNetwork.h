#ifndef LOCALNETWORK_H
#define LOCALNETWORK_H

#include <iostream>
#include <string>

using namespace std;

class LocalNetwork {
protected:
    string networkName; 
    double installationCost;

public:
    LocalNetwork(string name, double cost);
    virtual void showDetails();
    virtual double calculateInstallationCost() = 0; 
};

class PeerToPeerNetwork : public LocalNetwork {
private:
    int numberOfNodes; 
    string description;

public:
    PeerToPeerNetwork(string name, double cost, int nodes);
    void showDetails() override;
    double calculateInstallationCost() override;
};

class ClientServerNetwork : public LocalNetwork {
private:
    int numberOfClients; 
    string description;

public:
    ClientServerNetwork(string name, double cost, int clients);
    void showDetails() override;
    double calculateInstallationCost() override;
};

#endif 
