################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2/platform/common/src/sl_assert.c 

OBJS += \
./gecko_sdk_4.3.0/platform/common/src/sl_assert.o 

C_DEPS += \
./gecko_sdk_4.3.0/platform/common/src/sl_assert.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.3.0/platform/common/src/sl_assert.o: C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2/platform/common/src/sl_assert.c gecko_sdk_4.3.0/platform/common/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DEFR32MG24B220F1536IM48=1' '-DSL_BOARD_NAME="BRD4187C"' '-DSL_BOARD_REV="A01"' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_2400=1' '-DHARDWARE_BOARD_SUPPORTS_1_RF_BAND=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_2400=1' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:\Users\Hwdon\SourceCode\Skill-Tree\blink-led\blink-silabs-efr32mg24b\config" -I"C:\Users\Hwdon\SourceCode\Skill-Tree\blink-led\blink-silabs-efr32mg24b\autogen" -I"C:\Users\Hwdon\SourceCode\Skill-Tree\blink-led\blink-silabs-efr32mg24b" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/Device/SiliconLabs/EFR32MG24/Include" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//hardware/board/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/CMSIS/Core/Include" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/configuration_over_swo/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/driver/debug/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/device_init/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/emlib/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/common/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//hardware/driver/mx25_flash_shutdown/inc/sl_mx25_flash_shutdown_usart" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/common/toolchain/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/system/inc" -I"C:/Users/Hwdon/SimplicityStudio/SDKs/gecko_sdk_2//platform/service/udelay/inc" -Os -Wall -Wextra -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.3.0/platform/common/src/sl_assert.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


