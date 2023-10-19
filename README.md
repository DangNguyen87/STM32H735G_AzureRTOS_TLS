# STM32H735G_AzureRTOS_TLS
This repository contains the source code to enable AzureRTOS for STM32H735G-DK. The implementation for STM32H735G-DK based on original example from Azure RTOS repository 
[Getting Started with Azure RTOS and Azure IoT](https://github.com/azure-rtos/getting-started). The appliation on STM32H735G-DK will connect to Mosquitto MQTT broker for subscribing and publishing messages. The communication between the appliation on STM32H735G-DK and Mosquitto MQTT broker will be secured by TLS/SSL transport.

# What you need
- [STM32H735G-DK Discovery kit](https://www.st.com/en/evaluation-tools/stm32h735g-dk.html)
- Ubuntu Linux laptop to run Mosquitto MQTT broker
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
- ca.crt – Certificate from the CA (Certificate Authority), the public certificate.
- hostname.crt – Server certificate, signed by CA with its private key, public certificate.
- hostname.key – Server Private Key for decrypting of the incoming messages.

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
Note: change hostname.crt, hostname.key to your host name


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
openssl x509 -outform der -in ca.crt -out ca.der
xxd -i ca.der > ca.h
```

In file ```STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\app\Inc\mosquitto.cert.h  line 114 and 116```, update array length and certificate array data from ```ca.h``` file.

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

4. Use [STM32CubeProgrammer software](https://www.st.com/en/development-tools/stm32cubeprog.html) to flash the below binary file to STM32H735G-DK board.
```
STM32H735G_AzureRTOS_TLS\STMicroelectronics\STM32H735G-DK\build\app\stm32h735g_azure_iot.bin
```

Refer original setup guide from Azure RTOS repository [STMicroelectronics](https://github.com/azure-rtos/getting-started/tree/master/STMicroelectronics/B-L475E-IOT01A)

# Run application
1. Connect network cable to STM32H735G-DK board.
2. Configure a serial port app at baud rate 115,200 to monitor the device output.
3. Connect STM32H735G-DK board to Window host using USB cable.

# Video demonstration


# Reference
1. https://www.digitalocean.com/community/tutorials/how-to-install-and-secure-the-mosquitto-mqtt-messaging-broker-on-debian-9
2. https://primalcortex.wordpress.com/2016/03/31/mqtt-mosquitto-broker-with-ssltls-transport-security/
3. https://mcuoneclipse.com/2017/04/14/enable-secure-communication-with-tls-and-the-mosquitto-broker/
4. https://devopscube.com/create-self-signed-certificates-openssl/?bcsi-ac-0000000000000000=fcaa142de56deeb40330785a0f7d9a3c1b42f97cb3fb73eb4be2908b4a96ffc4;
5. https://www.ssl.com/guide/pem-der-crt-and-cer-x-509-encodings-and-conversions/
6. https://falsinsoft.blogspot.com/2015/03/linux-tool-convert-binary-file-to-cc.html
