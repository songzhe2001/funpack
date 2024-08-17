################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/lists/fsl_component_generic_list.c 

C_DEPS += \
./component/lists/fsl_component_generic_list.d 

OBJS += \
./component/lists/fsl_component_generic_list.o 


# Each subdirectory must supply rules for building sources it contributes
component/lists/%.o: ../component/lists/%.c component/lists/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MCXN947VDF -DCPU_MCXN947VDF_cm33 -DCPU_MCXN947VDF_cm33_core0 -DMCUXPRESSO_SDK -DLWIP_DISABLE_PBUF_POOL_SIZE_SANITY_CHECKS=1 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\source" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\utilities" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\drivers\flash" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\component\silicon_id" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\lwip\port" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\lwip\src" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\lwip\src\include" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\drivers" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\device" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\startup" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\component\uart" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\component\lists" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\component\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\component\gpio" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\CMSIS" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\board" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\TWO_lwip_dhcp_bm\HARDWARE" -O0 -fno-common -g3 -gdwarf-4 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-component-2f-lists

clean-component-2f-lists:
	-$(RM) ./component/lists/fsl_component_generic_list.d ./component/lists/fsl_component_generic_list.o

.PHONY: clean-component-2f-lists

