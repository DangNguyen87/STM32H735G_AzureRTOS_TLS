# STM32H735G_AzureRTOS_TLS
This repository contains the source code to enable AzureRTOS for STM32H735G-DK. The implementation for STM32H735G-DK based on original example from Microsoft repository 
[Getting Started with Azure RTOS and Azure IoT](https://github.com/azure-rtos/getting-started). The appliation on STM32H735G-DK will connect to Mosquitto MQTT broker for subscribing and publishing messages. The communication between development board and MQTT broker will be secured by TLS/SSL transport.

# What you need
- [STM32H735G-DK Discovery kit](https://www.st.com/en/evaluation-tools/stm32h735g-dk.html)

# Mosquitto MQTT broker configuration

## Install Mosquitto MQTT broker on Ubuntu laptop

On Ubuntu laptop, use following commands to install Mosquitto broker and client.
```console
sudo apt update
sudo apt install mosquitto mosquitto-clients
```
After installation, Mosquitto broker will run as a service. Use following command to verify the status of the broker.

```console
$ sudo systemctl status mosquitto

mosquitto.service - Mosquitto MQTT Broker
     Loaded: loaded (/lib/systemd/system/mosquitto.service; enabled; vendor preset: enabled)
     Active: active (running)
```

User can configure Mosquitto broker by modifying congfiguration files at location `/etc/mosquitto`.

# Configure broker certificates
Use this [Script](https://github.com/owntracks/tools/blob/master/TLS/generate-CA.sh) to generate a self signed certificate to be used by Mosquito for providing TLS for the MQTT.

If the script is called without parameters, it will generate a self signed certificate for the hostname where the script is running. The following generated files will be used to configure Mosquitto broker.
- ca.crt – The CA (Certificate Authority, who published the host certificate) public certificate.
- hostname.crt – The hostname, that will run the mosquitto broker, public certificate.
- hostname.key – The hostname private key

Copy the certificates and key files to `/etc/mosquitto/certs` directory.

```console
cp ca.crt /etc/mosquitto/certs
cp hostname.* /etc/mosquitto/certs
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


# Run application


# Video demonstration





