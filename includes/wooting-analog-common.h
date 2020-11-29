/* This is a generated header file providing the common items to everything related to the Analog SDK */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef enum {
  /**
   * Device has been connected
   */
  WootingAnalog_DeviceEventType_Connected = 1,
  /**
   * Device has been disconnected
   */
  WootingAnalog_DeviceEventType_Disconnected = 2,
} WootingAnalog_DeviceEventType;

typedef enum {
  /**
   * Device is of type Keyboard
   */
  WootingAnalog_DeviceType_Keyboard = 1,
  /**
   * Device is of type Keypad
   */
  WootingAnalog_DeviceType_Keypad = 2,
  /**
   * Device
   */
  WootingAnalog_DeviceType_Other = 3,
} WootingAnalog_DeviceType;

typedef enum {
  /**
   * USB HID Keycodes https://www.usb.org/document-library/hid-usage-tables-112 pg53
   */
  WootingAnalog_KeycodeType_HID = 0,
  /**
   * Scan code set 1
   */
  WootingAnalog_KeycodeType_ScanCode1 = 1,
  /**
   * Windows Virtual Keys
   */
  WootingAnalog_KeycodeType_VirtualKey = 2,
  /**
   * Windows Virtual Keys which are translated to the current keyboard locale
   */
  WootingAnalog_KeycodeType_VirtualKeyTranslate = 3,
} WootingAnalog_KeycodeType;

typedef enum {
  WootingAnalogResult_Ok = 1,
  /**
   * Item hasn't been initialized
   */
  WootingAnalogResult_UnInitialized = -2000,
  /**
   * No Devices are connected
   */
  WootingAnalogResult_NoDevices = -1999,
  /**
   * Device has been disconnected
   */
  WootingAnalogResult_DeviceDisconnected = -1998,
  /**
   * Generic Failure
   */
  WootingAnalogResult_Failure = -1997,
  /**
   * A given parameter was invalid
   */
  WootingAnalogResult_InvalidArgument = -1996,
  /**
   * No Plugins were found
   */
  WootingAnalogResult_NoPlugins = -1995,
  /**
   * The specified function was not found in the library
   */
  WootingAnalogResult_FunctionNotFound = -1994,
  /**
   * No Keycode mapping to HID was found for the given Keycode
   */
  WootingAnalogResult_NoMapping = -1993,
  /**
   * Indicates that it isn't available on this platform
   */
  WootingAnalogResult_NotAvailable = -1992,
  /**
   * Indicates that the operation that is trying to be used is for an older version
   */
  WootingAnalogResult_IncompatibleVersion = -1991,
  /**
   * Indicates that the Analog SDK could not be found on the system
   */
  WootingAnalogResult_DLLNotFound = -1990,
} WootingAnalogResult;

/**
 * The core `DeviceInfo` struct which contains all the interesting information
 * for a particular device. This is for use internally and should be ignored if you're
 * trying to use it when trying to interact with the SDK using the wrapper
 */
typedef struct WootingAnalog_DeviceInfo WootingAnalog_DeviceInfo;

typedef uint64_t WootingAnalog_DeviceID;

/**
 * The core `DeviceInfo` struct which contains all the interesting information
 * for a particular device. This is the version which the consumer of the SDK will receive
 * through the wrapper. This is not for use in the Internal workings of the SDK, that is what
 * DeviceInfo is for
 */
typedef struct {
  /**
   * Device Vendor ID `vid`
   */
  uint16_t vendor_id;
  /**
   * Device Product ID `pid`
   */
  uint16_t product_id;
  /**
   * Device Manufacturer name
   */
  char *manufacturer_name;
  /**
   * Device name
   */
  char *device_name;
  /**
   * Unique device ID, which should be generated using `generate_device_id`
   */
  WootingAnalog_DeviceID device_id;
  /**
   * Hardware type of the Device
   */
  WootingAnalog_DeviceType device_type;
} WootingAnalog_DeviceInfo_FFI;

/**
 * Create a new device info struct. This is only for use in Plugins that are written in C
 * Rust plugins should use the native constructor
 * The memory for the struct has been allocated in Rust. So `drop_device_info` must be called
 * for the memory to be properly released
 */
WootingAnalog_DeviceInfo *new_device_info(uint16_t vendor_id,
                                          uint16_t product_id,
                                          char *manufacturer_name,
                                          char *device_name,
                                          WootingAnalog_DeviceID device_id,
                                          WootingAnalog_DeviceType device_type);

/**
 * Drops the given `DeviceInfo`
 */
void drop_device_info(WootingAnalog_DeviceInfo *device);
