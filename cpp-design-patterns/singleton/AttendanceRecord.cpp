#include <iostream>

#include "AttendanceRecord.hpp"

AttendanceRecord *AttendanceRecord::instance = nullptr;

AttendanceRecord *AttendanceRecord::getInstance() {
    if (instance == nullptr) {
        instance = new AttendanceRecord();
    }

    return instance;
}

AttendanceRecord::AttendanceRecord() {
    cout << "AttendanceRecord::AttendanceRecord() called" << endl;
}

void AttendanceRecord::addAttendanceInformation(string studentName, string date, bool isPresent) {
    cout << "AttendanceRecord::addAttendanceInformation() called" << endl;
    attendanceRecord[studentName][date] = isPresent;
}

bool AttendanceRecord::getAttendanceInformation(string studentName, string date) {
    cout << "AttendanceRecord::getAttendanceInformation() called" << endl;

    if (attendanceRecord.find(studentName) == attendanceRecord.end()) {
        cout << "Student " << studentName << " not found in attendance record" << endl;
        return false;
    }
    else if (attendanceRecord[studentName].find(date) == attendanceRecord[studentName].end()) {
        cout << "Student " << studentName << " not found in attendance record on date " << date << endl;
        return false;
    }
    else {
        return attendanceRecord[studentName][date];
    }
}