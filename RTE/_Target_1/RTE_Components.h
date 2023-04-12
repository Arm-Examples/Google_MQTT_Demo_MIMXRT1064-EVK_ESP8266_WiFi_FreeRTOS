
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'Google_MQTT_Demo' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM.FreeRTOS::RTOS:Config:CMSIS RTOS2:10.5.1 */
#define RTE_RTOS_FreeRTOS_CONFIG_RTOS2  /* RTOS FreeRTOS Config for CMSIS RTOS2 API */
/* ARM.FreeRTOS::RTOS:Core:Cortex-M:10.5.1 */
#define RTE_RTOS_FreeRTOS_CORE          /* RTOS FreeRTOS Core */
/* ARM.FreeRTOS::RTOS:Event Groups:10.5.1 */
#define RTE_RTOS_FreeRTOS_EVENTGROUPS   /* RTOS FreeRTOS Event Groups */
/* ARM.FreeRTOS::RTOS:Heap:Heap_4:10.5.1 */
#define RTE_RTOS_FreeRTOS_HEAP_4        /* RTOS FreeRTOS Heap 4 */
/* ARM.FreeRTOS::RTOS:Timers:10.5.1 */
#define RTE_RTOS_FreeRTOS_TIMERS        /* RTOS FreeRTOS Timers */
/* ARM::CMSIS:RTOS2:FreeRTOS:Cortex-M:10.5.1 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_FreeRTOS        /* CMSIS-RTOS2 FreeRTOS */
/* ARM::Security:mbed TLS:2.24.0 */
#define RTE_Security_mbedTLS            /* Security mbed TLS */
/* Keil.ARM Compiler::Compiler:Event Recorder:DAP:1.5.1 */
#define RTE_Compiler_EventRecorder
          #define RTE_Compiler_EventRecorder_DAP
/* Keil.ARM Compiler::Compiler:I/O:STDERR:User:1.2.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
          #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* Keil.ARM Compiler::Compiler:I/O:STDIN:User:1.2.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
          #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* Keil.ARM Compiler::Compiler:I/O:STDOUT:User:1.2.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
          #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* Keil::CMSIS Driver:Ethernet MAC:1.2.0 */
#define RTE_Drivers_ETH_MAC0    (1U)    /* Driver ETH_MAC0 */
/* Keil::CMSIS Driver:Ethernet PHY:KSZ8081RNA:6.3.0 */
#define RTE_Drivers_PHY_KSZ8081RNA      /* Driver PHY KSZ8081RNA/RND */
/* Keil::CMSIS Driver:MCI:1.2.0 */
#define RTE_Drivers_MCI0        (1U)    /* Driver MCI0 */
        #define RTE_Drivers_MCI1        (1U)    /* Driver MCI1 */
/* Keil::CMSIS Driver:VIO:Board:MIMXRT1064-EVK:1.0.2 */
#define RTE_VIO_BOARD
        #define RTE_VIO_MIMXRT1064_EVK
/* Keil::CMSIS Driver:WiFi:ESP8266:UART:1.8.0 */
#define RTE_Drivers_WiFi_ESP8266_UART   /* Driver WiFi ESP8266 (UART) */
/* MDK-Packs::IoT Client:Google:1.0.1 */
#define RTE_IoT_Client_Google           /* Google IoT Client */
/* MDK-Packs::IoT Client:MQTTClient-C:1.1.1 */
#define RTE_IoT_Client_MQTTClient_C     /* MQTTClient-C IoT Client */
/* MDK-Packs::IoT Utility:MQTTPacket:1.1.0 */
#define RTE_IoT_MQTTPacket              /* IoT MQTTPacket */
/* MDK-Packs::IoT Utility:Socket:WiFi:1.0.0 */
#define RTE_IoT_Socket                  /* IoT Socket */
        #define RTE_IoT_Socket_WiFi             /* IoT Socket: WiFi */
/* NXP::Board Support:SDK Drivers:evkmimxrt1064:2.0.1 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Drivers:xip_device:2.0.3 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#ifndef SERIAL_PORT_TYPE_UART
#define SERIAL_PORT_TYPE_UART 1
#endif


#endif /* RTE_COMPONENTS_H */
