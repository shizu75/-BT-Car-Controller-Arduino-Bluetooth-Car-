🚗 BT Car Controller (Arduino Bluetooth Car)

An Arduino-based Bluetooth-controlled car using the HC-05 Bluetooth module and L293D/L298 motor driver, controllable via the Android app “BT Car Controller” available on the Google Play Store.

This project allows you to control a robotic car wirelessly using simple character commands sent from an Android phone.

📱 Android App

App Name: BT Car Controller
Platform: Android (Google Play Store)

The app sends single-character commands over Bluetooth to control the car’s movement.

🛠️ Hardware Requirements

Arduino Uno / Nano

HC-05 Bluetooth Module

L293D or L298 Motor Driver

2 × DC Motors

Car chassis + wheels

External power supply (battery pack)

Jumper wires

🔌 Pin Configuration
Arduino Pin	Component
3	HC-05 TX
2	HC-05 RX
5	Motor Driver ENA
6	Motor 1 IN1
7	Motor 1 IN2
9	Motor 2 IN3
10	Motor 2 IN4
8	Motor Driver ENB
📡 Bluetooth Communication

Baud Rate: 9600

Protocol: Serial (SoftwareSerial)

Module: HC-05

The Bluetooth module communicates with Arduino using software serial pins (2, 3).

🎮 Control Commands

The Android app sends the following characters:

Command	Action
F	Move Forward
B	Move Backward
L	Turn Left
R	Turn Right
S	Stop

Commands are automatically converted to uppercase, so lowercase inputs also work.

⚙️ How It Works

Arduino initializes Bluetooth and motor driver pins

HC-05 receives commands from the Android app

Arduino reads the character via Bluetooth

Based on the command, motors are driven accordingly

S stops all motors immediately

Newline (\n) and carriage return (\r) characters are ignored to prevent accidental behavior.

▶️ Setup Instructions

Upload the code to Arduino

Power the motor driver separately (recommended)

Pair HC-05 with your phone (default PIN: 1234 or 0000)

Open BT Car Controller app

Connect to HC-05

Start controlling the car 🎉

🧠 Code Highlights

Uses SoftwareSerial for Bluetooth communication

Modular motor control functions (forward(), backward(), etc.)

Clean switch-case logic for command handling

Safety handling for junk serial data

📂 File Structure
BT-Car-Controller/
│
├── bluetooth_car.ino
└── README.md

🚀 Future Improvements

Speed control using PWM

Obstacle avoidance using ultrasonic sensor

Camera streaming via ESP32

iOS support

👤 Author

Developed by Soban Saeed
📍 Arduino | Robotics | Embedded Systems
