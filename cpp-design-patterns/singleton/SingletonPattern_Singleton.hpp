#ifndef SINGLETONPATTERN_SINGLETON_HPP
#define SINGLETONPATTERN_SINGLETON_HPP

using namespace std;

class Singleton {

public:

    /**
     * @brief Get the instance object
     */
    static Singleton* getInstance();

private:

    /**
     * @brief Instance of the Singleton
    */
    static Singleton* instance;

    /**
     * @brief Private constructor to prevent instantiation
    */
    Singleton();

};

#endif // SINGLETONPATTERN_SINGLETON_HPP