/**
  ******************************************************************************
  * @file    mosquitto.cert.h
  * @author  MCD Application Team
  * @brief   trusted root CA certificate for Mosquitto borker client
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2020-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Binary data for the TLS Client X.509 trusted root CA certificate, ASN.1 DERencoded. A trusted certificate must be provided for TLS Client applications
(unless X.509 authentication is disabled) or TLS will treat all certificates as untrusted and the handshake will fail. */

#ifdef MOSQUITTO_MQTT_PUBLIC
unsigned int mosquitto_org_der_len = 1031;

const unsigned char mosquitto_org_der[] = {
  0x30, 0x82, 0x04, 0x03, 0x30, 0x82, 0x02, 0xeb, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x14, 0x05, 0x8d, 0x61, 0x94, 0x21, 0xaf, 0x76, 0x3e, 0x0d,
  0x84, 0x15, 0xe4, 0x67, 0xfb, 0x8b, 0x51, 0x93, 0x48, 0x2c, 0x0c, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b,
  0x05, 0x00, 0x30, 0x81, 0x90, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55,
  0x04, 0x06, 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03,
  0x55, 0x04, 0x08, 0x0c, 0x0e, 0x55, 0x6e, 0x69, 0x74, 0x65, 0x64, 0x20,
  0x4b, 0x69, 0x6e, 0x67, 0x64, 0x6f, 0x6d, 0x31, 0x0e, 0x30, 0x0c, 0x06,
  0x03, 0x55, 0x04, 0x07, 0x0c, 0x05, 0x44, 0x65, 0x72, 0x62, 0x79, 0x31,
  0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x09, 0x4d, 0x6f,
  0x73, 0x71, 0x75, 0x69, 0x74, 0x74, 0x6f, 0x31, 0x0b, 0x30, 0x09, 0x06,
  0x03, 0x55, 0x04, 0x0b, 0x0c, 0x02, 0x43, 0x41, 0x31, 0x16, 0x30, 0x14,
  0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0d, 0x6d, 0x6f, 0x73, 0x71, 0x75,
  0x69, 0x74, 0x74, 0x6f, 0x2e, 0x6f, 0x72, 0x67, 0x31, 0x1f, 0x30, 0x1d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16,
  0x10, 0x72, 0x6f, 0x67, 0x65, 0x72, 0x40, 0x61, 0x74, 0x63, 0x68, 0x6f,
  0x6f, 0x2e, 0x6f, 0x72, 0x67, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x30, 0x30,
  0x36, 0x30, 0x39, 0x31, 0x31, 0x30, 0x36, 0x33, 0x39, 0x5a, 0x17, 0x0d,
  0x33, 0x30, 0x30, 0x36, 0x30, 0x37, 0x31, 0x31, 0x30, 0x36, 0x33, 0x39,
  0x5a, 0x30, 0x81, 0x90, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
  0x06, 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55,
  0x04, 0x08, 0x0c, 0x0e, 0x55, 0x6e, 0x69, 0x74, 0x65, 0x64, 0x20, 0x4b,
  0x69, 0x6e, 0x67, 0x64, 0x6f, 0x6d, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03,
  0x55, 0x04, 0x07, 0x0c, 0x05, 0x44, 0x65, 0x72, 0x62, 0x79, 0x31, 0x12,
  0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x09, 0x4d, 0x6f, 0x73,
  0x71, 0x75, 0x69, 0x74, 0x74, 0x6f, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
  0x55, 0x04, 0x0b, 0x0c, 0x02, 0x43, 0x41, 0x31, 0x16, 0x30, 0x14, 0x06,
  0x03, 0x55, 0x04, 0x03, 0x0c, 0x0d, 0x6d, 0x6f, 0x73, 0x71, 0x75, 0x69,
  0x74, 0x74, 0x6f, 0x2e, 0x6f, 0x72, 0x67, 0x31, 0x1f, 0x30, 0x1d, 0x06,
  0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10,
  0x72, 0x6f, 0x67, 0x65, 0x72, 0x40, 0x61, 0x74, 0x63, 0x68, 0x6f, 0x6f,
  0x2e, 0x6f, 0x72, 0x67, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09,
  0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03,
  0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01,
  0x00, 0xc1, 0x34, 0x1c, 0xa9, 0x88, 0xcd, 0xf4, 0xce, 0xc2, 0x42, 0x8b,
  0x4f, 0x74, 0xc7, 0x1d, 0xef, 0x8e, 0x6d, 0xd8, 0xb3, 0x6a, 0x63, 0xe0,
  0x51, 0x99, 0x83, 0xeb, 0x84, 0xdf, 0xdf, 0x32, 0x5d, 0x35, 0xe6, 0x06,
  0x62, 0x7e, 0x02, 0x11, 0x76, 0xf2, 0x3f, 0xa7, 0xf2, 0xde, 0xd5, 0x9c,
  0xf1, 0x2d, 0x9b, 0xa1, 0x6e, 0x9d, 0xce, 0xb1, 0xfc, 0x49, 0xd1, 0x5f,
  0xf6, 0xea, 0x37, 0xdb, 0x41, 0x89, 0x03, 0xd0, 0x7b, 0x53, 0x51, 0x56,
  0x4d, 0xed, 0xf1, 0x75, 0xaf, 0xcb, 0x9b, 0x72, 0x45, 0x7d, 0xa1, 0xe3,
  0x91, 0x6c, 0x3b, 0x8c, 0x1c, 0x1c, 0x6a, 0xe4, 0x19, 0x8e, 0x91, 0x88,
  0x34, 0x76, 0xa9, 0x1d, 0x19, 0x69, 0x88, 0x26, 0x6c, 0xaa, 0xe0, 0x2d,
  0x84, 0xe8, 0x31, 0x5b, 0xd4, 0xa0, 0x0e, 0x06, 0x25, 0x1b, 0x31, 0x00,
  0xb3, 0x4e, 0xa9, 0x90, 0x41, 0x62, 0x33, 0x0f, 0xaa, 0x0d, 0xf2, 0xe8,
  0xfe, 0xcc, 0x45, 0x28, 0x1e, 0xaf, 0x42, 0x51, 0x5e, 0x90, 0xc7, 0x82,
  0xca, 0x68, 0xcb, 0x09, 0xb3, 0x70, 0x3c, 0x9c, 0xaa, 0xca, 0x11, 0x66,
  0x3d, 0x6c, 0x22, 0xa3, 0xf3, 0xc3, 0x32, 0xbb, 0x81, 0x4f, 0x33, 0xc7,
  0xdd, 0xc8, 0xa8, 0x06, 0x7a, 0xc9, 0x58, 0xa5, 0xdc, 0xdc, 0xe8, 0xd7,
  0x74, 0xb1, 0x85, 0x24, 0xe7, 0xe3, 0xee, 0x93, 0xf4, 0x8f, 0xf7, 0x6b,
  0xd8, 0xb1, 0xfb, 0xd9, 0xe4, 0xaf, 0xbf, 0x73, 0xd0, 0x40, 0x59, 0x7d,
  0xd0, 0x26, 0x4f, 0x16, 0x1a, 0xc2, 0x51, 0xc4, 0x47, 0x49, 0x2c, 0x68,
  0x13, 0xac, 0xa3, 0x18, 0xe7, 0x67, 0xcf, 0xb7, 0xfa, 0x3e, 0xf7, 0x8b,
  0x20, 0x1e, 0x7b, 0xe2, 0x44, 0x0e, 0x47, 0x0b, 0x7c, 0x78, 0xf9, 0xf4,
  0xca, 0x27, 0x6b, 0x4c, 0x2d, 0x62, 0x72, 0xd8, 0xa4, 0x10, 0x3d, 0xe7,
  0x1d, 0x88, 0x4c, 0x50, 0xe5, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x53,
  0x30, 0x51, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04,
  0x14, 0xf5, 0x55, 0xeb, 0x10, 0x54, 0x14, 0xf8, 0x86, 0x28, 0x3c, 0xa8,
  0xe5, 0x5d, 0xfe, 0x1d, 0xb8, 0x78, 0x37, 0xd6, 0x12, 0x30, 0x1f, 0x06,
  0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0xf5, 0x55,
  0xeb, 0x10, 0x54, 0x14, 0xf8, 0x86, 0x28, 0x3c, 0xa8, 0xe5, 0x5d, 0xfe,
  0x1d, 0xb8, 0x78, 0x37, 0xd6, 0x12, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d,
  0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b,
  0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x66, 0xbd, 0x91, 0x2d, 0xb5,
  0x37, 0xbd, 0x13, 0x84, 0xce, 0xbf, 0x1e, 0x3f, 0x43, 0xee, 0x66, 0xd5,
  0xc4, 0xa2, 0xc1, 0x8d, 0x55, 0x9e, 0xd9, 0x33, 0xec, 0x19, 0xf6, 0xe5,
  0xde, 0xb1, 0x03, 0x7d, 0x9f, 0x8e, 0x29, 0x16, 0x76, 0x8f, 0xa0, 0x02,
  0xea, 0xbe, 0xe3, 0x6f, 0x84, 0xd9, 0x3b, 0x77, 0x73, 0x17, 0x6a, 0x7a,
  0x76, 0x06, 0xeb, 0x95, 0x4e, 0xf5, 0x63, 0xfe, 0x0a, 0xd1, 0x37, 0x73,
  0x22, 0x34, 0x63, 0xdd, 0xc4, 0x37, 0x29, 0x29, 0xb8, 0xd4, 0x9b, 0xd4,
  0x43, 0x48, 0x59, 0xfd, 0xcd, 0x38, 0x88, 0x60, 0xe0, 0xff, 0x15, 0x9f,
  0xfa, 0x9a, 0x79, 0xf2, 0x77, 0xcf, 0x01, 0x8c, 0x2e, 0x7a, 0xba, 0xee,
  0x3c, 0xd5, 0xa6, 0x95, 0x2b, 0x56, 0x01, 0x77, 0xf4, 0x51, 0x3a, 0x91,
  0xb6, 0x0e, 0x21, 0x40, 0x35, 0x81, 0xb9, 0x41, 0x43, 0x25, 0x3b, 0x96,
  0xba, 0xe0, 0x6f, 0x11, 0x7b, 0x9d, 0xcf, 0xbe, 0x1e, 0x87, 0xfc, 0x0a,
  0xb0, 0xcc, 0x1f, 0xbb, 0x51, 0xc5, 0xbe, 0x3c, 0xb9, 0x67, 0x48, 0x8c,
  0x0d, 0x4f, 0x0f, 0x50, 0x37, 0xa9, 0x8d, 0x5a, 0x25, 0x38, 0x2b, 0x9e,
  0xf5, 0xab, 0x21, 0x95, 0x2e, 0x04, 0x07, 0x92, 0x04, 0x09, 0xd4, 0x91,
  0xd9, 0x32, 0x2d, 0x9c, 0x02, 0x22, 0x23, 0x08, 0xa6, 0xc7, 0xcd, 0xfd,
  0x2d, 0xd5, 0x1d, 0x46, 0xe7, 0x5a, 0x7c, 0xcb, 0xb9, 0x4f, 0x95, 0xe6,
  0x6b, 0x5f, 0x36, 0x38, 0x2d, 0x3f, 0xbb, 0xfc, 0x51, 0x94, 0x49, 0xbe,
  0xb6, 0xf2, 0x86, 0x1a, 0x67, 0xc5, 0x70, 0xdd, 0x29, 0x8a, 0xa5, 0x65,
  0xf0, 0xea, 0xd2, 0x3c, 0x18, 0x08, 0x95, 0xbf, 0xb5, 0x20, 0xa2, 0x44,
  0x9b, 0xf5, 0xeb, 0x89, 0x6a, 0xff, 0x0a, 0xae, 0x21, 0xfc, 0x97, 0xc1,
  0xec, 0xd4, 0xec, 0x7b, 0x35, 0x6c, 0x96, 0x09, 0x01, 0x6a, 0x85
};
#else
  unsigned int mosquitto_org_der_len = 1465;

  const unsigned char mosquitto_org_der[] = {
  0x30, 0x82, 0x05, 0xb5, 0x30, 0x82, 0x03, 0x9d, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x14, 0x1f, 0xc3, 0x2d, 0x87, 0x8e, 0xe4, 0x66, 0xba, 0x7a,
  0xbf, 0xf6, 0xa2, 0xa8, 0x8f, 0x07, 0x62, 0x07, 0x1b, 0x09, 0xa5, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0d,
  0x05, 0x00, 0x30, 0x6a, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04,
  0x03, 0x0c, 0x0e, 0x41, 0x6e, 0x20, 0x4d, 0x51, 0x54, 0x54, 0x20, 0x62,
  0x72, 0x6f, 0x6b, 0x65, 0x72, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55,
  0x04, 0x0a, 0x0c, 0x0d, 0x4f, 0x77, 0x6e, 0x54, 0x72, 0x61, 0x63, 0x6b,
  0x73, 0x2e, 0x6f, 0x72, 0x67, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55,
  0x04, 0x0b, 0x0c, 0x0b, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65,
  0x2d, 0x43, 0x41, 0x31, 0x21, 0x30, 0x1f, 0x06, 0x09, 0x2a, 0x86, 0x48,
  0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x12, 0x6e, 0x6f, 0x62, 0x6f,
  0x64, 0x79, 0x40, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e, 0x6e,
  0x65, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x32, 0x31, 0x31, 0x31, 0x30,
  0x31, 0x30, 0x30, 0x31, 0x30, 0x32, 0x5a, 0x17, 0x0d, 0x33, 0x32, 0x31,
  0x31, 0x30, 0x37, 0x31, 0x30, 0x30, 0x31, 0x30, 0x32, 0x5a, 0x30, 0x6a,
  0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0e, 0x41,
  0x6e, 0x20, 0x4d, 0x51, 0x54, 0x54, 0x20, 0x62, 0x72, 0x6f, 0x6b, 0x65,
  0x72, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x0d,
  0x4f, 0x77, 0x6e, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x73, 0x2e, 0x6f, 0x72,
  0x67, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x0b,
  0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x2d, 0x43, 0x41, 0x31,
  0x21, 0x30, 0x1f, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
  0x09, 0x01, 0x16, 0x12, 0x6e, 0x6f, 0x62, 0x6f, 0x64, 0x79, 0x40, 0x65,
  0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e, 0x6e, 0x65, 0x74, 0x30, 0x82,
  0x02, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
  0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x02, 0x0f, 0x00, 0x30, 0x82,
  0x02, 0x0a, 0x02, 0x82, 0x02, 0x01, 0x00, 0xcd, 0xb6, 0xc8, 0xba, 0x37,
  0x6b, 0x9c, 0x56, 0x3c, 0xbf, 0x33, 0xef, 0x42, 0xf6, 0x4f, 0x22, 0x22,
  0xa6, 0x9a, 0x67, 0xc0, 0xab, 0x57, 0x75, 0x89, 0xbe, 0xb9, 0x33, 0x73,
  0x5b, 0x82, 0x56, 0x48, 0x88, 0x37, 0xf4, 0xb2, 0x7b, 0x38, 0x27, 0xba,
  0x5c, 0x59, 0x00, 0x84, 0x99, 0x24, 0x52, 0x68, 0x48, 0x7a, 0x24, 0x08,
  0xaa, 0xac, 0x3a, 0x9e, 0xb1, 0x3e, 0x6e, 0xd9, 0xb9, 0x40, 0xe9, 0xf0,
  0x95, 0xb1, 0x65, 0xf1, 0xbc, 0x69, 0x77, 0x41, 0xb5, 0x0a, 0x9e, 0xac,
  0x40, 0x4d, 0x28, 0xc1, 0xe9, 0x4f, 0xc9, 0x06, 0xbf, 0xe8, 0x58, 0x02,
  0xdf, 0x67, 0x60, 0x01, 0x5b, 0x84, 0x24, 0x3a, 0xd1, 0xe5, 0x2f, 0x1e,
  0xb8, 0xe6, 0x52, 0x75, 0x50, 0xba, 0x47, 0x57, 0x6f, 0xfb, 0x32, 0x19,
  0xf4, 0xfb, 0x36, 0x67, 0x26, 0x39, 0xe9, 0xc9, 0x59, 0x34, 0xee, 0x62,
  0x38, 0x6d, 0xd7, 0x85, 0xca, 0x23, 0x89, 0xeb, 0x38, 0x43, 0x78, 0x0b,
  0xaf, 0xc1, 0x72, 0x5a, 0xed, 0x16, 0xd1, 0xde, 0x29, 0xcc, 0x57, 0x91,
  0x21, 0x0f, 0xdf, 0xd1, 0x42, 0xfd, 0x6f, 0x53, 0xc3, 0x12, 0x87, 0xe8,
  0x46, 0xcf, 0xf8, 0xb4, 0x72, 0xdf, 0xdf, 0x54, 0x57, 0xbf, 0x13, 0xfc,
  0x6b, 0x0e, 0x9f, 0x84, 0xc5, 0x4a, 0xf2, 0x88, 0xc3, 0x03, 0x26, 0x89,
  0x72, 0x45, 0x62, 0xdf, 0x58, 0x13, 0xfb, 0xb3, 0xfa, 0x38, 0xd6, 0xa4,
  0x6e, 0x8e, 0x9a, 0x7c, 0x53, 0x6b, 0x27, 0x14, 0xf7, 0xa2, 0xc8, 0xe0,
  0x80, 0x63, 0xef, 0x7f, 0xa9, 0x5a, 0x7c, 0x6f, 0x4b, 0x71, 0xd3, 0xbf,
  0xba, 0x9b, 0x53, 0xce, 0x2b, 0xce, 0x88, 0xf7, 0xbf, 0x69, 0x85, 0x0d,
  0x05, 0xbd, 0x7a, 0x2e, 0x94, 0x27, 0x09, 0x27, 0x7b, 0x73, 0x37, 0x99,
  0x92, 0xac, 0x40, 0x8d, 0xd0, 0x2d, 0x9d, 0x8c, 0x98, 0x81, 0x6b, 0xf6,
  0x85, 0x8c, 0x48, 0xb9, 0x7c, 0x2e, 0x06, 0x66, 0x36, 0x7f, 0x22, 0xba,
  0x6b, 0x62, 0x76, 0xd3, 0x78, 0x4d, 0xdb, 0x11, 0x50, 0x64, 0x12, 0xb7,
  0x9f, 0x4b, 0xe5, 0x03, 0x81, 0x59, 0x4a, 0xdd, 0xc7, 0x4a, 0x4b, 0x66,
  0x34, 0xb6, 0x2c, 0xb5, 0x36, 0x44, 0xbf, 0xd2, 0xbd, 0xca, 0x08, 0xf5,
  0x78, 0xf3, 0x0d, 0xbf, 0x2c, 0xa1, 0x9c, 0xc5, 0x77, 0x4b, 0xcb, 0x6b,
  0x05, 0x5d, 0x4c, 0x00, 0x3a, 0xa9, 0xb1, 0x2f, 0x28, 0x4c, 0x1e, 0xc5,
  0x10, 0x25, 0xfe, 0xbf, 0xe0, 0x97, 0x25, 0x34, 0xa0, 0x50, 0xf3, 0xb0,
  0x29, 0x30, 0xaa, 0x06, 0x98, 0x5e, 0x4b, 0xc9, 0x96, 0x4f, 0x6c, 0x2a,
  0x3d, 0xaa, 0xe0, 0xef, 0xfe, 0x0f, 0xd1, 0x59, 0xd1, 0x40, 0x24, 0x0b,
  0xb4, 0x93, 0xec, 0x91, 0x79, 0xc8, 0x07, 0x70, 0xe0, 0x41, 0x1d, 0xf3,
  0x1b, 0xf0, 0x21, 0x14, 0x13, 0xa2, 0x68, 0xd1, 0x0c, 0xce, 0xc0, 0x73,
  0x90, 0x33, 0x5b, 0xc4, 0x48, 0x45, 0x88, 0x68, 0x9c, 0xa4, 0xcf, 0x8b,
  0xdd, 0x16, 0xcd, 0xd7, 0x11, 0xa4, 0xb3, 0x22, 0x68, 0x3a, 0x30, 0x3b,
  0x5b, 0x09, 0xaa, 0xa9, 0x3b, 0xac, 0xc6, 0xb1, 0xde, 0xf1, 0x48, 0x31,
  0x24, 0xfb, 0x1f, 0x9c, 0xd5, 0x0c, 0x90, 0xae, 0x62, 0x80, 0x48, 0xb9,
  0x1a, 0xb6, 0x99, 0x31, 0x57, 0x08, 0xf1, 0x35, 0x52, 0xc1, 0xd2, 0x7b,
  0x68, 0x1e, 0x8a, 0x6c, 0x87, 0x62, 0x46, 0xe7, 0x8f, 0x53, 0x43, 0x03,
  0x8d, 0x2b, 0x6e, 0x50, 0xf1, 0xfc, 0x8a, 0xad, 0xf4, 0xde, 0xb6, 0xaa,
  0x77, 0x3c, 0xe6, 0x7a, 0x29, 0x84, 0xb1, 0xd2, 0xe8, 0x9e, 0x25, 0x3d,
  0x01, 0x90, 0x6e, 0xbb, 0xd2, 0x17, 0x26, 0x5b, 0x29, 0xd3, 0x76, 0xac,
  0xd0, 0x30, 0x42, 0x3a, 0x37, 0x27, 0xe7, 0xaa, 0xb8, 0x30, 0xee, 0x41,
  0x29, 0xc4, 0x3f, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x53, 0x30, 0x51,
  0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x51,
  0xea, 0xdc, 0x2a, 0x6d, 0x8c, 0xe1, 0xad, 0x31, 0xb8, 0x35, 0xfb, 0x9c,
  0xef, 0xa0, 0x12, 0x8e, 0x86, 0x9c, 0xf6, 0x30, 0x1f, 0x06, 0x03, 0x55,
  0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x51, 0xea, 0xdc, 0x2a,
  0x6d, 0x8c, 0xe1, 0xad, 0x31, 0xb8, 0x35, 0xfb, 0x9c, 0xef, 0xa0, 0x12,
  0x8e, 0x86, 0x9c, 0xf6, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01,
  0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0d, 0x06,
  0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0d, 0x05, 0x00,
  0x03, 0x82, 0x02, 0x01, 0x00, 0x8d, 0xdb, 0xf9, 0x61, 0x1d, 0x9e, 0xca,
  0xe5, 0x1a, 0x38, 0xde, 0xbc, 0x77, 0x37, 0x99, 0xa7, 0xb7, 0xc5, 0xf4,
  0x89, 0x29, 0x05, 0x78, 0xd7, 0xfc, 0x5d, 0xa9, 0xec, 0x27, 0xfd, 0x00,
  0xff, 0x5a, 0x6c, 0xd2, 0xd0, 0xa3, 0x57, 0x09, 0x24, 0x34, 0x4b, 0x93,
  0xe1, 0x7e, 0xea, 0x4c, 0x25, 0x3f, 0xb8, 0xeb, 0x24, 0xb7, 0x18, 0x6d,
  0x98, 0x46, 0xea, 0x83, 0xd1, 0xd6, 0x4d, 0x77, 0x49, 0x8d, 0xe9, 0xaa,
  0xed, 0x61, 0xb5, 0x1e, 0x61, 0xda, 0xbd, 0x4d, 0xd1, 0x09, 0x2e, 0xab,
  0xcc, 0x47, 0x80, 0x11, 0xc1, 0xf4, 0x44, 0xbd, 0xb3, 0x70, 0x16, 0x78,
  0xfb, 0xad, 0x53, 0xb2, 0x19, 0xeb, 0xfe, 0x04, 0xfc, 0x2b, 0xf1, 0xb1,
  0x7d, 0xf8, 0x0d, 0xa4, 0xbb, 0x01, 0xac, 0xb7, 0xf0, 0x9c, 0x98, 0x46,
  0x9d, 0x3d, 0x67, 0x18, 0x0d, 0x24, 0x4c, 0x43, 0x1f, 0x7b, 0x0d, 0x3e,
  0x71, 0xa8, 0xee, 0x1a, 0x04, 0x1a, 0xe3, 0x1e, 0x34, 0x56, 0x5b, 0xcc,
  0xc2, 0xbe, 0x3e, 0xee, 0x58, 0x88, 0x7b, 0x40, 0x9d, 0x2b, 0xaf, 0x4b,
  0xf4, 0x3b, 0x86, 0x02, 0x94, 0x00, 0x75, 0xad, 0x27, 0xcf, 0x6b, 0x8f,
  0x7a, 0x81, 0x88, 0x4f, 0x34, 0x43, 0xa4, 0xe8, 0x71, 0xe1, 0x34, 0xe1,
  0xb5, 0x1d, 0xf4, 0x83, 0x91, 0xf4, 0x41, 0x0d, 0x1e, 0xf4, 0xe7, 0x0b,
  0x0c, 0x83, 0x53, 0x95, 0xe7, 0x45, 0x12, 0x6c, 0xd4, 0xe2, 0x2d, 0xc1,
  0x3a, 0xce, 0x68, 0x04, 0xa3, 0x4b, 0x52, 0xbd, 0xba, 0x12, 0x64, 0x68,
  0x75, 0xf6, 0x66, 0x76, 0x75, 0x74, 0x16, 0xf3, 0x50, 0x2d, 0x7a, 0x50,
  0xf2, 0x82, 0xde, 0x4f, 0x50, 0x41, 0xab, 0x6a, 0xf7, 0x21, 0x58, 0x4a,
  0x98, 0x75, 0x30, 0xb8, 0x7f, 0x69, 0xc2, 0x63, 0x8a, 0x58, 0x81, 0xd5,
  0x43, 0x69, 0x5d, 0xa9, 0x24, 0xea, 0x2c, 0x55, 0x9d, 0xcf, 0xa5, 0x6a,
  0xd8, 0x6e, 0xbe, 0xe1, 0x14, 0x3c, 0x04, 0xa3, 0x9c, 0xfe, 0xe3, 0xc7,
  0x63, 0xf1, 0xb1, 0xf5, 0x5c, 0x65, 0x1a, 0x2a, 0x72, 0xfa, 0x9c, 0x22,
  0xb7, 0x62, 0x20, 0x30, 0x3e, 0xa7, 0x90, 0x33, 0x74, 0xad, 0x35, 0xdd,
  0x1d, 0x75, 0xc1, 0x76, 0x08, 0x20, 0x84, 0x3d, 0x50, 0x38, 0x3b, 0xba,
  0x3f, 0x04, 0x7e, 0x09, 0x27, 0xe7, 0xd1, 0x3c, 0x21, 0x71, 0x80, 0x7f,
  0xdf, 0x56, 0xbc, 0xc0, 0x39, 0x3f, 0x59, 0x0c, 0x2c, 0xed, 0xac, 0x6a,
  0xdd, 0x4c, 0x76, 0xbe, 0x65, 0x84, 0xf6, 0xd0, 0xcf, 0x69, 0x93, 0xde,
  0x88, 0x59, 0x2c, 0x13, 0xe3, 0xe5, 0xef, 0xbe, 0xe7, 0xd9, 0x1f, 0x4a,
  0xdb, 0x2b, 0x72, 0x3f, 0xe9, 0xfa, 0xc4, 0xc8, 0x96, 0xa7, 0x29, 0xd8,
  0xc6, 0xba, 0xa4, 0x69, 0x14, 0x67, 0x99, 0x26, 0x7a, 0x09, 0x7c, 0xc9,
  0x18, 0x9c, 0xb2, 0x98, 0xc3, 0x93, 0x82, 0xfb, 0x61, 0x35, 0xe9, 0x35,
  0xb7, 0x1a, 0x10, 0x6a, 0x79, 0x3a, 0x5f, 0x00, 0x2e, 0xa5, 0xa6, 0xb9,
  0x4f, 0x42, 0xc3, 0x15, 0xd9, 0xe2, 0xc8, 0xff, 0x3d, 0xed, 0x4c, 0xf0,
  0x2b, 0xc0, 0x22, 0x00, 0xc5, 0x3e, 0xcb, 0xd2, 0xf3, 0xd4, 0x75, 0x7d,
  0xde, 0x7c, 0x4a, 0x85, 0xd2, 0x1e, 0xfb, 0x0a, 0x38, 0x63, 0x1e, 0x63,
  0xbe, 0x8d, 0xc3, 0x28, 0x0e, 0x5d, 0x76, 0x32, 0x5e, 0x2b, 0x5b, 0x42,
  0xf6, 0x2c, 0x1e, 0x38, 0xf6, 0x12, 0xab, 0xec, 0xce, 0x2d, 0x68, 0x1d,
  0x90, 0x4a, 0x2c, 0x08, 0xa4, 0xb0, 0x85, 0x72, 0xda, 0x9d, 0x66, 0xc6,
  0x41, 0xa5, 0x5c, 0xd2, 0xf8, 0x2f, 0x6b, 0x66, 0xb5, 0x7f, 0xee, 0x8d,
  0x04, 0x34, 0xeb, 0x0c, 0x41, 0xd7, 0x56, 0x35, 0xd7, 0x4f, 0xa4, 0xc5,
  0x38, 0xc8, 0x9b, 0xcd, 0x5e, 0xd4, 0xf5, 0x61, 0x63, 0x4d, 0xef, 0xf6,
  0xfa
  };
#endif

