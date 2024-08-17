################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_ctimer.c \
../drivers/fsl_enet.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i3c.c \
../drivers/fsl_inputmux.c \
../drivers/fsl_lpflexcomm.c \
../drivers/fsl_lptmr.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_spc.c \
../drivers/fsl_tsi_v6.c 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_ctimer.d \
./drivers/fsl_enet.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i3c.d \
./drivers/fsl_inputmux.d \
./drivers/fsl_lpflexcomm.d \
./drivers/fsl_lptmr.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_spc.d \
./drivers/fsl_tsi_v6.d 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_ctimer.o \
./drivers/fsl_enet.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i3c.o \
./drivers/fsl_inputmux.o \
./drivers/fsl_lpflexcomm.o \
./drivers/fsl_lptmr.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_spc.o \
./drivers/fsl_tsi_v6.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MCXN947VDF -DCPU_MCXN947VDF_cm33 -DCPU_MCXN947VDF_cm33_core0 -DMCUXPRESSO_SDK -DLWIP_DISABLE_PBUF_POOL_SIZE_SANITY_CHECKS=1 -DSDK_DEBUGCONSOLE=1 -DPRINTF_FLOAT_ENABLE=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSDK_OS_BAREMETAL -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\utilities" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\drivers\flash" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\silicon_id" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\port" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\src" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\src\include" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\drivers" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\device" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\startup" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\uart" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\lists" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\gpio" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\CMSIS" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\p3t1755" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\template" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\source" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\board" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm\HARDWARE" -O0 -fno-common -g3 -gdwarf-4 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_common_arm.d ./drivers/fsl_common_arm.o ./drivers/fsl_ctimer.d ./drivers/fsl_ctimer.o ./drivers/fsl_enet.d ./drivers/fsl_enet.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_i3c.d ./drivers/fsl_i3c.o ./drivers/fsl_inputmux.d ./drivers/fsl_inputmux.o ./drivers/fsl_lpflexcomm.d ./drivers/fsl_lpflexcomm.o ./drivers/fsl_lptmr.d ./drivers/fsl_lptmr.o ./drivers/fsl_lpuart.d ./drivers/fsl_lpuart.o ./drivers/fsl_power.d ./drivers/fsl_power.o ./drivers/fsl_reset.d ./drivers/fsl_reset.o ./drivers/fsl_spc.d ./drivers/fsl_spc.o ./drivers/fsl_tsi_v6.d ./drivers/fsl_tsi_v6.o

.PHONY: clean-drivers

