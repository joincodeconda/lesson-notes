#ifndef OBSERVER_PATTERN_PUBLISHER_HPP
#define OBSERVER_PATTERN_PUBLISHER_HPP

#include "ObserverPattern_Subscriber.hpp"

class Publisher {

public:

    /**
     * @brief Destroy the Publisher object
    */
    virtual ~Publisher() = default;

    /**
     * @brief Register a new subscriber
    */
    virtual void registerSubscriber(Subscriber* subscriber) = 0;

    /**
     * @brief Unregister a subscriber
    */
    virtual void unregisterSubscriber(Subscriber* subscriber) = 0;

    /**
     * @brief Notify all subscribers
    */
    virtual void notifySubscribers() = 0;
};

#endif // OBSERVER_PATTERN_PUBLISHER_HPP