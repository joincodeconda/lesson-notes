#ifndef OBSERVER_PATTERN_SUBSCRIBER_HPP
#define OBSERVER_PATTERN_SUBSCRIBER_HPP

using namespace std;

class Subscriber {

public:

    /**
     * @brief Destroy the Subscriber object
    */
    virtual ~Subscriber() = default;

    /**
     * @brief Update the subscriber with a boolean flag
    */
    virtual void update(bool flag) = 0;
};

#endif // OBSERVER_PATTERN_SUBSCRIBER_HPP