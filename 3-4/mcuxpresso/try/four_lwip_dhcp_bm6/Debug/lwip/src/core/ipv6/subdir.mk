################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lwip/src/core/ipv6/dhcp6.c \
../lwip/src/core/ipv6/ethip6.c \
../lwip/src/core/ipv6/icmp6.c \
../lwip/src/core/ipv6/inet6.c \
../lwip/src/core/ipv6/ip6.c \
../lwip/src/core/ipv6/ip6_addr.c \
../lwip/src/core/ipv6/ip6_frag.c \
../lwip/src/core/ipv6/mld6.c \
../lwip/src/core/ipv6/nd6.c 

C_DEPS += \
./lwip/src/core/ipv6/dhcp6.d \
./lwip/src/core/ipv6/ethip6.d \
./lwip/src/core/ipv6/icmp6.d \
./lwip/src/core/ipv6/inet6.d \
./lwip/src/core/ipv6/ip6.d \
./lwip/src/core/ipv6/ip6_addr.d \
./lwip/src/core/ipv6/ip6_frag.d \
./lwip/src/core/ipv6/mld6.d \
./lwip/src/core/ipv6/nd6.d 

OBJS += \
./lwip/src/core/ipv6/dhcp6.o \
./lwip/src/core/ipv6/ethip6.o \
./lwip/src/core/ipv6/icmp6.o \
./lwip/src/core/ipv6/inet6.o \
./lwip/src/core/ipv6/ip6.o \
./lwip/src/core/ipv6/ip6_addr.o \
./lwip/src/core/ipv6/ip6_frag.o \
./lwip/src/core/ipv6/mld6.o \
./lwip/src/core/ipv6/nd6.o 


# Each subdirectory must supply rules for building sources it contributes
lwip/src/core/ipv6/%.o: ../lwip/src/core/ipv6/%.c lwip/src/core/ipv6/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MCXN947VDF -DCPU_MCXN947VDF_cm33 -DCPU_MCXN947VDF_cm33_core0 -DMCUXPRESSO_SDK -DLWIP_DISABLE_PBUF_POOL_SIZE_SANITY_CHECKS=1 -DSDK_DEBUGCONSOLE=1 -DPRINTF_FLOAT_ENABLE=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSDK_OS_BAREMETAL -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\utilities" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\drivers\flash" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\silicon_id" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\port" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\src" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\src\include" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\drivers" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\device" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\startup" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\uart" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\lists" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\phy" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\gpio" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\CMSIS" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\component\p3t1755" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\lwip\template" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\source" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm6\board" -I"F:\ku\MCUXpresso\program\ying_he\funpack3_4\try\four_lwip_dhcp_bm\HARDWARE" -O0 -fno-common -g3 -gdwarf-4 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lwip-2f-src-2f-core-2f-ipv6

clean-lwip-2f-src-2f-core-2f-ipv6:
	-$(RM) ./lwip/src/core/ipv6/dhcp6.d ./lwip/src/core/ipv6/dhcp6.o ./lwip/src/core/ipv6/ethip6.d ./lwip/src/core/ipv6/ethip6.o ./lwip/src/core/ipv6/icmp6.d ./lwip/src/core/ipv6/icmp6.o ./lwip/src/core/ipv6/inet6.d ./lwip/src/core/ipv6/inet6.o ./lwip/src/core/ipv6/ip6.d ./lwip/src/core/ipv6/ip6.o ./lwip/src/core/ipv6/ip6_addr.d ./lwip/src/core/ipv6/ip6_addr.o ./lwip/src/core/ipv6/ip6_frag.d ./lwip/src/core/ipv6/ip6_frag.o ./lwip/src/core/ipv6/mld6.d ./lwip/src/core/ipv6/mld6.o ./lwip/src/core/ipv6/nd6.d ./lwip/src/core/ipv6/nd6.o

.PHONY: clean-lwip-2f-src-2f-core-2f-ipv6

