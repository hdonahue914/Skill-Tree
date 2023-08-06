/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#include "em_gpio.h"
#include "sl_udelay.h"
#include "blink.h"

struct LedConfig
{
    volatile GPIO_Port_TypeDef port;
    unsigned int pin;
    GPIO_Mode_TypeDef mode;
};

LedConfig ledConfig0 {gpioPortB, 02U, gpioModePushPull};
LedConfig *pLedConfig0 = &ledConfig0;
Led led0((LedConfig*) pLedConfig0);;
Led* pLed0 = &led0;
/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
void app_init(void)
{
//  UDELAY_Calibrate();

//  GPIO_PinModeSet ( gpioPortB,
//  02U,
//  gpioModePushPull,
//  0U
//  );
//  GPIO_PinOutSet(gpioPortB, 02U);

}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
  sl_udelay_wait(100000U);
  sl_udelay_wait(100000U);
  sl_udelay_wait(100000U);
//  GPIO_PinOutToggle(gpioPortB, 02U);
  pLed0->toggle();
}
