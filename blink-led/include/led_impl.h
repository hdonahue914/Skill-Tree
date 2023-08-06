/**
 * @file led_impl.h
 * @author hdonahue
 * @brief implementation file for LED. Hardware specific layer.
 * @version 0.1
 * @date 2023-07-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

struct LedConfig {
    // empty base class
}

/**
 * @fn implLedInit
 * @brief initialize LED state
 * 
 * @param config  
 */
void implLedInit(const void *config);

/**
 * @fn implLedSetState
 * @brief Hardware implementation for getting state
 * 
 */
void implLedSetState(const void *config, bool);

/**
 * @fn implLedGetState
 * @brief Hardware implementation for getting LED state
 * 
 * @retval true - LED On
 * @retval false - LED off
 */
bool implLedGetState(void);