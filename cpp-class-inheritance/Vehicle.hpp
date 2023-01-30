#include <string>

// Vehicle is the base class.
class Vehicle {
public:
    std::string name;
    Vehicle(std::string n, int v) {
        name = n;
        vin = v;
    }
    void honk();
protected:
    int vin;
};

// Here we define a derived class called Car. It has a private member called
// ownerName.
class Car: public Vehicle {
public:
    Car(std::string n, int v, std::string o): Vehicle(n, v) {
        name = n;
        vin = v;
        ownerName = o;
    }
    bool hasVin();
    bool hasOwnerName();
private:
    std::string ownerName;
};

// This is another derived class: Truck. Notice that the constructor is
// slightly different than that of Car.
class Truck: public Vehicle {
public:
    bool usedForConstruction;
    Truck(std::string n, int v, bool u): Vehicle(n, v) {
        name = n;
        vin = v;
        usedForConstruction = u;
    }
};