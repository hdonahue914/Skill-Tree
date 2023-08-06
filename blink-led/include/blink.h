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

#include "led_impl.h"



/**
 * @class Led
 * @brief Class for managing LED object
 * 
 */
class Led
{
private:
    bool state;
    LedConfig *config;

public:
    Led(LedConfig *config);
    ~Led();

    int setState(bool state);
    bool getState(void);
    int toggle(void);
};


