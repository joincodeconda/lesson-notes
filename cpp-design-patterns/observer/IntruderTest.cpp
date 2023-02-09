#include <iostream>

#include "SmartAlarm.hpp"
#include "SmartSecurityCamera.hpp"

int main() {
    SmartSecurityCamera camera1(1);

    SmartAlarm alarm1(1);
    SmartAlarm alarm2(2);
    SmartAlarm alarm3(3);

    camera1.registerSubscriber(&alarm1);
    camera1.registerSubscriber(&alarm2);
    camera1.registerSubscriber(&alarm3);

    camera1.setIntruderDetected(true);
    camera1.setIntruderDetected(false);

    camera1.unregisterSubscriber(&alarm1);

    camera1.setIntruderDetected(true);
    camera1.setIntruderDetected(true);
    camera1.setIntruderDetected(false);
    camera1.setIntruderDetected(false);

    return 0;
}