#include <string>
#include <vector>
#include <iostream>
#include "Vehicle.hpp"

using namespace std;

// honk() is a class method declared in Vehicle.hpp, and needs to be defined.
void Vehicle::honk() {
    cout << "HONK!" << endl;
}

// vin is a protected member of the Vehicle class, this means it can only be 
// accessed within the Vehicle class or any classes that inherit from it.
bool Car::hasVin() {
    if (vin != 0) {
        return true;
    }
    return false;
}

// ownerName is a private member of the Car class, which means it can only be
// accessed within the Car class
bool Car::hasOwnerName() {
    if (!ownerName.empty()) {
        return true;
    }
    return false;
}


int main() {
    // This instantiates a Car and Truck on the stack.
    Car car("Ford Bronco", 23456, "George Washington");
    Truck truck("Bulldozer", 98765, true);

    car.honk();

    if (car.hasOwnerName()) {
        cout << "The car has a name for the owner." << endl;
    }

    if (car.hasVin()) {
        cout << "The car has a VIN." << endl;
    }

    truck.honk();

    // We can also dynamically allocate a Car and Truck from the heap using the
    // new keyword. Notice the new keyword returns a pointer.
    Car *carPtr = new Car("Toyota Corolla", 67454, "Alex Hamilton");
    Truck *truckPtr = new Truck("Plow", 98989, false);

    return 0;
}