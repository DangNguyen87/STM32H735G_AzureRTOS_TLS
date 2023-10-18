# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

set(SOURCES
        STM32H735G-DK/stm32h735g_discovery.c
        Components/lan8742/lan8742.c
)

set(TARGET STM32H735GDK_BSP)

add_library(${TARGET} OBJECT
    ${SOURCES}
)

target_compile_definitions(${TARGET}
    PUBLIC
        USE_HAL_DRIVER
        STM32H735xx
)

target_include_directories(${TARGET} 
    PUBLIC
        STM32H735G-DK/
        Components/lan8742
        ../CMSIS/Device/st/STM32H7xx/Include
        ../CMSIS/Include
        ../STM32H7xx_HAL_Driver/Inc
        ../../app/Inc         # For finding stm32h735g_discovery_conf.h that gerated by tool in application
)
