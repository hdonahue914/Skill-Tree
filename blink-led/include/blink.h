/**
 * @file blink.h
 * @author hdonahue
 * @brief 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <cstdint>

/**
 * @class Led
 * @brief Class for managing LED object
 * 
 */
class Led
{
private:
    bool state;
    uint8_t pin;

public:
    Led(/* args */);
    ~Led();

    int ledState(bool state);
    bool ledState(void) const; 
};

Led::Led(/* args */)
{
}

Led::~Led()
{
}
