/**
 * @file blink.cpp
 * @author hdonahue
 * @brief 
 * @version 0.1
 * @date 2023-07-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "blink.h"

/**
 * @fn Led
 * @brief Construct a new Led:: Led object
 * 
 */
Led::Led(void *config) :
    state{false}, config{config}
{
    implLedInit(config);
    setState(false);
}

int Led::setState(bool state)
{
    this->state = state;
    implLedSetState(this->config, state);
}

int Led::toggle()
{
    this->state = ~state;
    implLedSetState(this->config, state);
}

bool Led::getState()
{
    state = implLedGetState();
    return state;
}

Led::~Led()
{
}
