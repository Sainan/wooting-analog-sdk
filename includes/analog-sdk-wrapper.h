/* This is a generated header file detailing the interface to the Analog SDK Wrapper */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "analog-sdk-common.h"

AnalogSDKResult sdk_clear_device_event_cb(void);

int sdk_device_info(ASDK_DeviceInfo **buffer, unsigned int len);

AnalogSDKResult sdk_initialise(void);

bool sdk_is_initialised(void);

float sdk_read_analog(unsigned short code);

float sdk_read_analog_device(unsigned short code, ASDK_DeviceID device_id);

int sdk_read_full_buffer(unsigned short *code_buffer, float *analog_buffer, unsigned int len);

int sdk_read_full_buffer_device(unsigned short *code_buffer,
                                float *analog_buffer,
                                unsigned int len,
                                ASDK_DeviceID device_id);

AnalogSDKResult sdk_set_device_event_cb(void (*cb)(ASDK_DeviceEventType, ASDK_DeviceInfo*));

AnalogSDKResult sdk_set_mode(ASDK_KeycodeType mode);

AnalogSDKResult sdk_uninitialise(void);
