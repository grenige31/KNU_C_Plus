#include <iostream>
using namespace std;

class Vehicle {
public:
    string manufacturer, model;
    void setVehicleDetails(string mfr, string mdl) {
        manufacturer = mfr;
        model = mdl;
    }
};

class Bike : public Vehicle {
public:
    int gearCount;
    void setBikeDetails(int gears) {
        gearCount = gears;
    }
    void display() {
        cout << "Manufacturer: " << manufacturer << ", Model: " << model << endl;
        cout << "Gear Count: " << gearCount << endl;
    }
};

int main() {
    Bike myBike;
    myBike.setVehicleDetails("Giant", "TCR Advanced");
    myBike.setBikeDetails(22);
    myBike.display();
    return 0;
}
