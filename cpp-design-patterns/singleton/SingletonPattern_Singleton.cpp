#include <iostream>

#include "SingletonPattern_Singleton.hpp"

Singleton *Singleton::instance = nullptr;

Singleton *Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }

    return instance;
}

Singleton::Singleton() {
    cout << "Singleton::Singleton() called" << endl;
}