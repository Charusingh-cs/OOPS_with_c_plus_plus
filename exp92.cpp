#include <iostream>
using namespace std;

class ServiceRecord {
public:
    string serviceName;
    float cost;

    void read() {
        cout << "Enter Service Name: ";
        cin >> serviceName;

        cout << "Enter Service Cost: ";
        cin >> cost;
    }

    void display() {
        cout << "Service: " << serviceName << endl;
        cout << "Cost: " << cost << endl;
    }
};

class Vehicle {
public:
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    ServiceRecord* services;

    Vehicle(int n) {
        serviceCount = n;
        services = new ServiceRecord[serviceCount];
    }

    void read() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        for (int i = 0; i < serviceCount; i++) {
            cout << "\nEnter Service " << i + 1 << endl;
            services[i].read();
        }
    }

    void display() {
        cout << "\nVehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;

        float total = 0;

        cout << "\nService Records:\n";

        for (int i = 0; i < serviceCount; i++) {
            services[i].display();
            total = total + services[i].cost;
            cout << endl;
        }

        cout << "Total Service Bill: " << total << endl;
    }

    ~Vehicle() {
        delete[] services;
    }
};

int main() {
    int n;

    cout << "Enter number of services: ";
    cin >> n;

    Vehicle* v = new Vehicle(n);

    v->read();
    v->display();

    delete v;

    return 0;
}