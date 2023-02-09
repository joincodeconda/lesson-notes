#include <iostream>

#include "AttendanceRecord.hpp"

int main() {
    AttendanceRecord *attendanceRecord1 = AttendanceRecord::getInstance();
    AttendanceRecord *attendanceRecord2 = AttendanceRecord::getInstance();

    attendanceRecord1->addAttendanceInformation("Oliver", "2019-01-01", true);
    attendanceRecord2->addAttendanceInformation("Mika", "2019-01-01", true);

    bool result1 = attendanceRecord1->getAttendanceInformation("Oliver", "2019-01-01");
    bool result2 = attendanceRecord1->getAttendanceInformation("Mika", "2019-01-01");

    cout << "Oliver was present on 2019-01-01: " << result1 << endl;
    cout << "Mika was present on 2019-01-01: " << result2 << endl;

    return 0;
}