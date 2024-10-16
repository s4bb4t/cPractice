
#include <iostream>
#include <cmath> 
using namespace std;

// Задание 1
class Point {
private:
    float x, y; 

public:
    Point(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

    float getX() { return x; }
    float getY() { return y; }

    ~Point() {
        cout << "Object at (" << x << ", " << y << ") is destroyed.
";
    }

    static float distance(Point p1, Point p2) {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }
};

// Задание 2
class LocalNetwork {
private:
    int numberOfDevices; 
    float installationCostPerDevice;

public:
    LocalNetwork(int devices, float cost) : numberOfDevices(devices), installationCostPerDevice(cost) {}

    float calculateMinimumInstallationCost() {
        return numberOfDevices * installationCostPerDevice;
    }

    ~LocalNetwork() {
        cout << "LocalNetwork object destroyed.
";
    }
};

int main() {
    Point point1(1.0, 2.0); 
    Point point2(4.0, 6.0); 

    float distanceBetweenPoints = Point::distance(point1, point2);
    cout << "Distance between points: " << distanceBetweenPoints << endl;

    LocalNetwork network(10, 150.0); // 
    float installationCost = network.calculateMinimumInstallationCost();
    cout << "Minimum installation cost: " << installationCost << endl;

    return 0;
}
