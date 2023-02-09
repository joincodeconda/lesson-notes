#include <iostream>

#include "SmartSecurityCamera.hpp"

SmartSecurityCamera::SmartSecurityCamera(int cameraId) : cameraId(cameraId) {
    cout << "SmartSecurityCamera::SmartSecurityCamera() called with cameraId " << cameraId << endl;
}

void SmartSecurityCamera::registerSubscriber(Subscriber* subscriber) {
    cout << "SmartSecurityCamera::registerSubscriber() called" << endl;
    subscribers.push_back(subscriber);
}

void SmartSecurityCamera::unregisterSubscriber(Subscriber* subscriber) {
    cout << "SmartSecurityCamera::unregisterSubscriber() called" << endl;
    subscribers.erase(remove(subscribers.begin(), subscribers.end(), subscriber), subscribers.end());
}

void SmartSecurityCamera::notifySubscribers() {
    cout << "SmartSecurityCamera::notifySubscribers() called for camera " << cameraId << endl;

    for (Subscriber *subscriber : subscribers) {
        subscriber->update(intruderDetected);
    }
}

void SmartSecurityCamera::setIntruderDetected(bool intruderDetected) {
    cout << "SmartSecurityCamera::setIntruderDetected() called with flag " << intruderDetected << endl;

    if (this->intruderDetected != intruderDetected) {
        this->intruderDetected = intruderDetected;
        notifySubscribers();
    }
}