#ifndef ATTENDANCE_RECORD_HPP
#define ATTENDANCE_RECORD_HPP

#include <string>
#include <map>

using namespace std;

class AttendanceRecord {

public:

    /**
     * @brief Get the instance object for the attendance record
     */
    static AttendanceRecord* getInstance();

    /**
     * @brief Add date and attendance information for a student to the record
     * @param studentName Name of the student
     * @param date Date of attendance
     * @param isPresent True if the student was present, false otherwise
    */
    void addAttendanceInformation(string studentName, string date, bool isPresent);

    /**
     * @brief Get attendance information for a student on a given date
     * @param studentName Name of the student
     * @param date Date of attendance
    */
    bool getAttendanceInformation(string studentName, string date);

private:

    /**
     * @brief Instance of the attendance record
    */
    static AttendanceRecord* instance;

    /**
     * @brief Private constructor to prevent instantiation
    */
    AttendanceRecord();

    /**
     * @brief Attendance record for all students: map of student names to map of dates of attendance to attendance information
    */
    map<string, map<string, bool>> attendanceRecord;

};

#endif // ATTENDANCE_RECORD_HPP