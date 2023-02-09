#ifndef SMART_SECURITY_CAMERA_HPP
#define SMART_SECURITY_CAMERA_HPP

#include <vector>

#include "ObserverPattern_Publisher.hpp"
#include "ObserverPattern_Subscriber.hpp"

class SmartSecurityCamera : public Publisher {

public:

    /**
    * @brief Construct a new Smart Security Camera object
    */
    SmartSecurityCamera(int cameraId);

    /**
    * @brief Destroy the Smart Security Camera object
    */
    virtual ~SmartSecurityCamera() = default;

    /**
    * @brief Register a new subscriber
    */
    virtual void registerSubscriber(Subscriber* subscriber) override;

    /**
    * @brief Unregister a subscriber
    */
    virtual void unregisterSubscriber(Subscriber* subscriber) override;

    /**
    * @brief Notify all subscribers
    */
    virtual void notifySubscribers() override;

    /**
    * @brief Set the intruder detected flag
    */
    void setIntruderDetected(bool intruderDetected);

private:

    /**
    * @brief Camera ID
    */
    int cameraId;

    /**
    * @brief Intruder detected flag
    */
    bool intruderDetected;

    /**
    * @brief List of subscribers
    */
    std::vector<Subscriber*> subscribers;

};

#endif // SMART_SECURITY_CAMERA_HPP