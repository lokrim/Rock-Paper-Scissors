# ✊✋✌️ Arduino Rock Paper Scissors Machine

This is a simple yet fun Arduino-based Rock, Paper, Scissors game that brings the classic game to life with electronics. Instead of drawing symbols or using hands, the machine detects your presence and plays a random move using a servo and displays the result on an LCD.

## 🧠 How It Works

- The **Ultrasonic Sensor (HC-SR04)** detects your hand motion.
- Once motion is detected, the Arduino picks a random move: Rock, Paper, or Scissors.
- The **Servo Motor** positions a hand/indicator to show the selected move physically.
- The **LCD Display (16x2)** displays the name of the move (e.g., "PAPER").

## 🧰 Components Used

- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90 or similar)
- LCD Display (16x2 with I2C or parallel)
- Breadboard and jumper wires
- 9V Battery (optional external power)

## 🔌 Circuit Overview

![image](https://github.com/user-attachments/assets/af6140b3-0684-4694-ba6f-b95541142341)


## 📝 Code Overview

- Uses `random()` to pick a move on motion detection
- Displays the move name on the LCD
- Moves the servo arm to a predefined position for each move
