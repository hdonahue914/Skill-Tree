/**
 * @file led_impl.cpp
 * @author hdonahue
 * @brief hardware implementation for led control
 * @version 0.1
 * @date 2023-07-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "em_gpio.h"
#include "led_impl.h"
#include <assert.h>

struct LedConfigImpl : LedConfig
{
    volatile GPIO_Port_TypeDef port;
    unsigned int pin;
    GPIO_Mode_TypeDef mode;
};


/**
 * @fn implLedInit
 * @brief initialize LED state
 * 
 * @param config  
 */
void implLedInit(const LedConfigImpl *config)
{
//    assert(config != nullptr);

    LedConfigImpl *led_cfg {(LedConfigImpl*)config};
    GPIO_PinModeSet(
        led_cfg->port, 
        led_cfg->pin, 
        led_cfg->mode, 
        0U);
}


/**
 * @fn implLedSetState
 * @brief Hardware implementation for getting state
 * 
 */
void implLedSetState(const LedConfigImpl *config, bool state)
{
    // assert(config != nullptr);

    LedConfigImpl* led_cfg {(LedConfig*)config};
    (state) ? GPIO_PinOutSet(led_cfg->port, led_cfg->pin) : GPIO_PinOutClear(led_cfg->port, led_cfg->pin);
}

/**
 * @fn implLedGetState
 * @brief Hardware implementation for getting LED state
 * 
 * @retval true - LED On
 * @retval false - LED off
 */
bool implLedGetState(const LedConfigImpl *config)
{
    // assert(config != nullptr);

    LedConfigImpl* led_cfg {(LedConfigImpl *)config};
    return GPIO_PinOutGet(led_cfg->port, led_cfg->pin);
}
