# 🚗 BT Car Controller (Arduino Bluetooth Car)

An Arduino-based Bluetooth-controlled robotic car using an **HC-05 Bluetooth module** and **L293D/L298 motor driver**, controlled via the Android app **BT Car Controller** available on the Google Play Store.

---

## 📱 Android App

**App Name:** BT Car Controller  
**Platform:** Android (Google Play Store)

The app sends single-character commands over Bluetooth to control the movement of the car.

---

## 🛠️ Hardware Requirements

- Arduino Uno / Nano  
- HC-05 Bluetooth Module  
- L293D or L298 Motor Driver  
- 2 × DC Motors  
- Robot car chassis  
- External battery/power supply  
- Jumper wires  

---

## 🔌 Pin Configuration

| Arduino Pin | Component |
|------------|----------|
| 3 | HC-05 TX |
| 2 | HC-05 RX |
| 5 | ENA (Motor Enable A) |
| 6 | Motor 1 IN1 |
| 7 | Motor 1 IN2 |
| 9 | Motor 2 IN3 |
| 10 | Motor 2 IN4 |
| 8 | ENB (Motor Enable B) |

---

## 📡 Bluetooth Details

- **Module:** HC-05  
- **Baud Rate:** 9600  
- **Communication:** SoftwareSerial  

Default HC-05 pairing PIN is usually `1234` or `0000`.

---

## 🎮 Control Commands

| Command | Function |
|-------|---------|
| `F` | Move Forward |
| `B` | Move Backward |
| `L` | Turn Left |
| `R` | Turn Right |
| `S` | Stop |

Commands are case-insensitive. Newline and carriage return characters are ignored.

---

## ⚙️ Working Principle

1. Arduino initializes Bluetooth and motor pins  
2. HC-05 receives commands from the Android app  
3. Arduino reads incoming characters via Bluetooth  
4. Motor driver responds based on command  
5. Motors stop immediately when `S` is received  

---

## ▶️ How to Use

1. Upload the code to Arduino  
2. Power the motor driver and Arduino  
3. Pair your phone with HC-05  
4. Open **BT Car Controller** app  
5. Connect to HC-05  
6. Control the car wirelessly  

---



## 📂 File Structure
BT-Car-Controller/
│
├── bluetooth_car.ino
└── README.md


---

## 🚀 Future Enhancements

- PWM-based speed control  
- Obstacle avoidance sensors  
- ESP32 upgrade  
- Camera streaming  

---

## 👤 Author

**Soban Saeed**  
Arduino • Embedded Systems • Robotics

