
# I2C Scanner for ESP Boards and Arduino

## Table of Contents

- [Author](#author)
- [Version](#version)
- [Date](#date)
- [Overview](#overview)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Description](#code-description)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [Additional Resources](#additional-resources)
- [License](#license)

## Author

- Larbi OUIYZME

## Version

- 1.0

## Date

- October 6, 2023

## Overview

This project includes a simple I2C scanner program that detects I2C devices connected to your ESP board or Arduino. It scans through the range of possible I2C addresses and reports which addresses are in use.

## Requirements

- Software : Arduino IDE
- Arduino, ESP32, ESP8266, or NodeMCU board
- I2C devices for testing (e.g., sensors, displays, etc.)

## Installation

1. Open Arduino IDE.
2. Copy the I2C scanner code into a new Arduino sketch.
3. Connect your board to the computer.
4. Choose the correct board and port in the Arduino IDE.
5. Upload the sketch to your board.

## Usage

1. Open the Serial Monitor from the Arduino IDE.
2. The program will start scanning for I2C devices automatically.
3. If any I2C devices are found, their addresses will be printed in the Serial Monitor.

## Code Description

The code begins the I2C communication and continuously scans for devices, printing the address of any devices it finds.

## Troubleshooting

- Ensure your board is correctly connected to your computer.
- Make sure the Serial Monitor's baud rate matches the one set in the code (115200 by default).
- Check your wiring if the scanner isn't detecting your I2C devices.

## Contributing

If you'd like to contribute to this project, please fork the repository and submit a pull request.

## Additional Resources

For more details, please refer to the [full article here](INSERT_ARTICLE_LINK).

## License

This project is licensed under the MIT License. See the `LICENSE.md` file for details.
