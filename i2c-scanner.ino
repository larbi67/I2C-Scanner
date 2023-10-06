/*
  Author: Larbi OUIYZME
  Version: 1.0
  Date: October 6, 2023
  Title: Simple I2C scanner
*/

// Include the Wire library to communicate with I2C devices
#include <Wire.h>

// This function runs once when you turn your Arduino or ESP board on or press the reset button
void setup() {
  // Initialize the I2C communication
  Wire.begin();

  // Initialize the Serial communication with a baud rate of 115200
  Serial.begin(115200);

  // Print a message to the Serial Monitor to indicate the I2C scanning will begin
  Serial.println("\nI2C Scanner");
}

// This function loops continuously after the setup() has been run
void loop() {
  // Declare variables to store the error status and address
  byte error, address;

  // Variable to store the number of devices found
  int nDevices = 0;

  // Print "Scanning..." to the Serial Monitor
  Serial.println("Scanning...");

  // Loop through the range of possible I2C addresses (from 1 to 126)
  for (address = 1; address < 127; address++) {

    // Begin transmission to the device at the specified address
    Wire.beginTransmission(address);

    // End the transmission and store the return status in 'error'
    error = Wire.endTransmission();

    // If 'error' is 0, it means that a device has been found at that address
    if (error == 0) {

      // Print the address to the Serial Monitor
      Serial.print("I2C device found at address 0x");

      // If the address is less than 16, print an additional "0" for formatting
      if (address < 16) Serial.print("0");

      // Print the address in hexadecimal format
      Serial.println(address, HEX);

      // Increment the device count
      nDevices++;
    }
  }

  // If no devices were found, print a message to the Serial Monitor
  if (nDevices == 0) {
    Serial.println("No I2C devices found\n");
  } else {
    // If one or more devices were found, print "Done" to the Serial Monitor
    Serial.println("Done\n");
  }

  // Wait 5 seconds before the next scan
  delay(5000);
}
