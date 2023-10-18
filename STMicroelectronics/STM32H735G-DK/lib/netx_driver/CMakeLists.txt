# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

set(SOURCES
    Src/nx_stm32_eth_driver.c
    Src/nx_stm32_phy_driver.c
)

set(PROJECT stm32h735gdk_netx_driver)

add_library(${PROJECT} OBJECT
    ${SOURCES}
)

target_link_libraries(${PROJECT}
    PUBLIC
        azrtos::threadx
        azrtos::netxduo
        STM32H7xx_HAL_Driver
        STM32H735GDK_BSP
)

target_include_directories(${PROJECT}
    PUBLIC
        Inc/
        ../../app/Inc         # For finding nx_stm32_eth_config.h that gerated by tool in application
)
