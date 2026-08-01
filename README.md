# 🌸 Autonomous Maze Robot

![ESP32](https://img.shields.io/badge/ESP32-FF69B4?style=for-the-badge&logo=espressif&logoColor=white)
![PlatformIO](https://img.shields.io/badge/PlatformIO-FFB6C1?style=for-the-badge&logo=platformio&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-FFC0CB?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Robotics](https://img.shields.io/badge/Robotics-F8BBD0?style=for-the-badge&logo=ros&logoColor=white)

## 💖 About the Project

This repository contains the complete development of an autonomous maze-solving robot built around an **ESP32** microcontroller.

The robot is designed to navigate a maze autonomously by detecting walls and obstacles using **three ultrasonic sensors** while controlling DC motors through an H-bridge motor driver. The project emphasizes modular development, allowing each subsystem to be designed, tested, and integrated independently.

This repository serves as the main project workspace, containing both the robot firmware and the electronic hardware documentation.

## 🤖 Features

- Autonomous maze navigation
- Real-time obstacle detection
- Wall-following using three ultrasonic sensors
- Differential drive with DC motors
- Modular firmware architecture
- Custom electronic hardware design

## 📂 Repository Structure

```text
.
├── firmware/
│   ├── src/
│   ├── include/
│   └── platformio.ini
│
├── hardware/
│   └── Robot_Schematic.pdf
│
└── README.md
```

### 🚀 Firmware

The `firmware` directory contains the complete source code for the robot, developed using **PlatformIO** and the Arduino framework for the ESP32.

The firmware is organized into independent modules to improve readability, maintenance, and scalability as the project evolves.

### ⚡ Hardware

The `hardware` directory contains the electronic design of the robot, including the circuit schematic and future hardware documentation.

## 🔧 Hardware Components

- ESP32 Development Board
- 3 × HC-SR04 Ultrasonic Sensors
- Dual H-Bridge Motor Driver
- 2 × DC Motors
- Li-Ion Battery Pack

## 📈 Project Goals

- Design a fully autonomous maze-solving robot.
- Develop modular and maintainable firmware.
- Validate hardware through systematic component testing.
- Integrate sensing, control, and navigation into a reliable robotic platform.

## 📚 Development Status

🚧 This project is currently under development.

New features, hardware revisions, and documentation will be added as development progresses.