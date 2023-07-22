################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_4.3.0/platform/service/udelay/src/subdir.mk
-include gecko_sdk_4.3.0/platform/service/system/src/subdir.mk
-include gecko_sdk_4.3.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.3.0/platform/emlib/src/subdir.mk
-include gecko_sdk_4.3.0/platform/driver/debug/src/subdir.mk
-include gecko_sdk_4.3.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.3.0/platform/common/src/subdir.mk
-include gecko_sdk_4.3.0/platform/Device/SiliconLabs/EFR32MG24/Source/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/configuration_over_swo/src/subdir.mk
-include gecko_sdk_4.3.0/hardware/board/src/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := blink-silabs-efr32mg24b
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: blink-silabs-efr32mg24b.axf

# Tool invocations
blink-silabs-efr32mg24b.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C++ Linker'
	arm-none-eabi-g++ -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "C:\Users\Hwdon\SourceCode\Skill-Tree\blink-led\blink-silabs-efr32mg24b\autogen\linkerfile.ld" --specs=nosys.specs -Xlinker --gc-sections -Xlinker -Map="blink-silabs-efr32mg24b.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o blink-silabs-efr32mg24b.axf -Wl,--start-group "./app.o" "./main.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./gecko_sdk_4.3.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.3.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.3.0/hardware/driver/configuration_over_swo/src/sl_cos.o" "./gecko_sdk_4.3.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./gecko_sdk_4.3.0/platform/Device/SiliconLabs/EFR32MG24/Source/startup_efr32mg24.o" "./gecko_sdk_4.3.0/platform/Device/SiliconLabs/EFR32MG24/Source/system_efr32mg24.o" "./gecko_sdk_4.3.0/platform/common/src/sl_assert.o" "./gecko_sdk_4.3.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_core.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_emu.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_msc.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_system.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_usart.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.3.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.3.0/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_4.3.0/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_4.3.0/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" -lstdc++ -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: blink-silabs-efr32mg24b.out'
	arm-none-eabi-objcopy "blink-silabs-efr32mg24b.axf" "blink-silabs-efr32mg24b.out"
	@echo ' '

	@echo 'Building hex file: blink-silabs-efr32mg24b.hex'
	arm-none-eabi-objcopy -O ihex "blink-silabs-efr32mg24b.axf" "blink-silabs-efr32mg24b.hex"
	@echo ' '

	@echo 'Building bin file: blink-silabs-efr32mg24b.bin'
	arm-none-eabi-objcopy -O binary "blink-silabs-efr32mg24b.axf" "blink-silabs-efr32mg24b.bin"
	@echo ' '

	@echo 'Building s37 file: blink-silabs-efr32mg24b.s37'
	arm-none-eabi-objcopy -O srec "blink-silabs-efr32mg24b.axf" "blink-silabs-efr32mg24b.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "blink-silabs-efr32mg24b.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(CC_DEPS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C++_DEPS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_UPPER_DEPS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(CXX_DEPS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(CPP_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) blink-silabs-efr32mg24b.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
