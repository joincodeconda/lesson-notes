#include <iostream>

#include "SmartAlarm.hpp"

SmartAlarm::SmartAlarm(int alarmId) : alarmId(alarmId) {
    cout << "SmartAlarm::SmartAlarm() called with alarmId " << alarmId << endl;
}

void SmartAlarm::update(bool flag) {
    cout << "SmartAlarm::update() called with flag " << flag << endl;

    if (flag) {
        startAlarm();
    }
    else {
        stopAlarm();
    }
}

void SmartAlarm::startAlarm() {
    cout << "ALERT FROM ALARM " << alarmId << ": THERE IS AN INTRUDER ON THE PROPERTY!" << endl;
}

void SmartAlarm::stopAlarm() {
    cout << "Message from alarm " << alarmId << ": The intruder has left the premises." << endl;
}