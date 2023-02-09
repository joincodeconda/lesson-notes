#ifndef SMART_ALARM_HPP
#define SMART_ALARM_HPP

#include "ObserverPattern_Subscriber.hpp"

class SmartAlarm : public Subscriber {

public:

    /**
     * @brief Construct a new Smart Alarm object
    */
    SmartAlarm(int alarmId);

    /**
    * @brief Destroy the Smart Alarm object
    */
    virtual ~SmartAlarm() = default;

    /**
    * @brief Update the subscriber with a boolean flag
    */
    virtual void update(bool flag) override;

    /**
     * @brief Start alarm noise
    */
    void startAlarm();

    /**
     * @brief Stop alarm noise
    */
    void stopAlarm();

private:

    /**
     * @brief Alarm ID
    */
    int alarmId;

};

#endif // SMART_ALARM_HPP