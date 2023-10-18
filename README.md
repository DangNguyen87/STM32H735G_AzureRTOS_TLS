# STM32H735G_AzureRTOS_TLS
This repository contains the source code to enable AzureRTOS for STM32H735G-DK. The implementation for STM32H735G-DK based on original example from Azure RTOS repository 
[Getting Started with Azure RTOS and Azure IoT](https://github.com/azure-rtos/getting-started). The appliation on STM32H735G-DK will connect to Mosquitto MQTT broker for subscribing and publishing messages. The communication between the appliation on STM32H735G-DK and MQTT broker will be secured by TLS/SSL transport.

# What you need
- [STM32H735G-DK Discovery kit](https://www.st.com/en/evaluation-tools/stm32h735g-dk.html)
- Ubuntu Linux laptop to run Mosquitto MQTT Broker
- Window or Ubuntu Linux laptop to build applicaition binary image

# Mosquitto MQTT broker configuration

## Install Mosquitto MQTT broker on Ubuntu Linux laptop

On Ubuntu Linux laptop, use following commands to install Mosquitto broker and client.
```console
sudo apt update
sudo apt install mosquitto mosquitto-clients
```
After installation, Mosquitto broker will run as a service. Use following command to verify the status of the broker.

```console
sudo systemctl status mosquitto

mosquitto.service - Mosquitto MQTT Broker
     Loaded: loaded (/lib/systemd/system/mosquitto.service; enabled; vendor preset: enabled)
     Active: active (running)
```

User can configure Mosquitto broker by modifying congfiguration files at location `/etc/mosquitto`.

## Configure broker certificates
Use this [script](https://github.com/owntracks/tools/blob/master/TLS/generate-CA.sh) to generate a self signed certificate to be used by Mosquito broker for providing TLS for the MQTT.

If the script is called without parameters, it will generate a self signed certificate for the hostname where the script is running. The following generated files will be used to configure Mosquitto broker.
- ca.crt – The CA (Certificate Authority, who published the host certificate) public certificate.
- hostname.crt – The hostname, that will run the Mosquitto broker, public certificate.
- hostname.key – The hostname private key

Copy the certificates and key files to `/etc/mosquitto/certs` directory.

```console
sudo cp ca.crt /etc/mosquitto/certs
sudo cp hostname.* /etc/mosquitto/certs
```
In `/etc/mosquitto/conf.d` directory, create file `local.conf`. Add the following configuration to `local.conf` to enable MQTT TLS with above certificates and key files.

```
# Plain MQTT protocol
listener 1883

# End of plain MQTT configuration

# MQTT over TLS/SSL
listener 8883
cafile /etc/mosquitto/certs/ca.crt
certfile /etc/mosquitto/certs/hostname.crt
keyfile /etc/mosquitto/certs/hostname.key

# End of MQTT over TLS/SLL configuration
```

After change configuration, restart Mosquitto broker.
```console
sudo systemctl restart mosquitto
```

# Build the binary image
Follow below steps to build application for STM32H735G-DK
1. Update configuration for local Mosquitto broker

In file ```STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\app\Inc\app_netxduo.h```, update IP address to IP address of your Mosquitto broker.
```
#define LOCAL_SERVER_ADDRESS        (IP_ADDRESS(192, 168, 0, 105))
```

Convert certificate file from to .der format and generate C array for importing to application

```console
openssl x509 -outform der -in hostname.crt -out hostname.der
xxd -i hostname.der > hostname.h
```

In file ```C:\Data\ShareVM\STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\app\Inc\mosquitto.cert.h  line 114 and 116```, update certificate array length and C array from above generated file.

```
unsigned int mosquitto_org_der_len = ;
const unsigned char mosquitto_org_der[] = {}
```

2. On Window host (can use Ubuntu Linux host), install the development tools.
```
STM32H735G_AzureRTOS_TLS\tools\get-toolchain.bat
```

3. Build binary image.
```
STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\tools\rebuild.bat
```

4. Use STM32CubeProgrammer tool to flash the below binary file to STM32H735G-DK board.
```
STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\build\app\stm32h735g_azure_iot.bin
```

Refer original setup guide from Azure RTOS repository [STMicroelectronics](https://github.com/azure-rtos/getting-started/tree/master/STMicroelectronics/B-L475E-IOT01A)

# Run application


# Video demonstration





