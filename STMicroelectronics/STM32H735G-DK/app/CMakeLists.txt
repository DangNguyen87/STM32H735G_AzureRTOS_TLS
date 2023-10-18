# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

set(SOURCES
    Src/AZURE_RTOS/App/app_azure_rtos.c
    Src/app_netxduo.c
    Src/app_threadx.c
    Src/main.c
    Src/stm32h7xx_hal_msp.c
    Src/stm32h7xx_hal_timebase_tim.c
    Src/stm32h7xx_it.c
    Src/syscalls.c
    Src/sysmem.c
    Src/system_stm32h7xx.c
    Src/tx_initialize_low_level.S
    Startup/startup_stm32h735igkx.s
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    azrtos::threadx
    azrtos::netxduo
    #app_common
    #jsmn
    STM32H7xx_HAL_Driver
    STM32H735GDK_BSP
    stm32h735gdk_netx_driver
)

target_include_directories(${PROJECT_NAME}
    PRIVATE 
        Inc
)

target_compile_definitions(${PROJECT_NAME}
    PUBLIC
        USE_HAL_DRIVER
        STM32H735xx
)

# Set location for finding linker file
target_link_directories(${PROJECT_NAME}
    PUBLIC 
        Startup
)

if(CMAKE_C_COMPILER_ID STREQUAL "IAR")
    message(FATAL_ERROR, "IAR is not currently implemented for this device")
else()
    set_target_linker(${PROJECT_NAME} STM32H735IGKX_FLASH.ld)
endif()

post_build(${PROJECT_NAME})
