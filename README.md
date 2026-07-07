Ultra Low Power SRAM Simulator using Arduino

Overview

This project is an Arduino-based Ultra Low Power SRAM Simulator developed using the Wokwi simulator. It demonstrates the basic functionality of Static Random Access Memory (SRAM), including read, write, memory storage, and low-power operation. An OLED display is used to visualize stored data, while push buttons control different memory operations.

Features

- Simulates SRAM read and write operations
- Displays stored data on a 0.96" I2C OLED display
- Supports low-power sleep mode
- Wake-up functionality using a push button
- LED status indication for memory operations
- Interactive operation through push buttons and Serial Monitor
- Fully compatible with the Wokwi online simulator

Components Used

- Arduino Uno
- SSD1306 I2C OLED Display (128×64)
- 4 Push Buttons
- 1 LED
- 220 Ω Resistor
- Breadboard and Jumper Wires

Pin Connections

Component| Arduino Pin
Write Button| D2
Read Button| D3
Sleep Button| D4
Wake Button| D5
LED| D8
OLED SDA| A4
OLED SCL| A5
OLED VCC| 5V
OLED GND| GND

Working Principle

1. Press Write to store data in the simulated SRAM.
2. Press Read to retrieve and display the stored data on the OLED.
3. Press Sleep to enter low-power mode.
4. Press Wake to resume normal operation while retaining the stored data.
5. The LED indicates memory operations, and the OLED provides real-time feedback.

Project Structure

- "sketch.ino" – Arduino source code
- "diagram.json" – Wokwi circuit configuration
- "README.md" – Project documentation

Applications

- Embedded Systems Learning
- SRAM Memory Demonstration
- Low-Power Electronics
- Arduino Projects
- Electronics Laboratory Experiments
- Engineering Mini Projects

Future Improvements

- Multi-address SRAM simulation
- Configurable memory size
- Password-protected memory access
- Data logging and monitoring
- ESP32 IoT integration
- Power consumption analysis

Wokwi Simulation

Open the project in Wokwi, start the simulation, and use the push buttons to perform write, read, sleep, and wake operations. Monitor the OLED display and Serial Monitor for system status and stored data.


Author
** Bathina Bhavya Sri Lakshmi **

Developed as an educational embedded systems project using Arduino and the Wokwi simulator.
