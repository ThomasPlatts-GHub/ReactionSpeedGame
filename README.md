# 🎮 Reaction Speed Game (Arduino-Based)

A fast-paced, LED-and-buzzer-driven reaction speed game built with Arduino. This project challenges two players to react as quickly as possible after a randomized countdown — with visual and auditory feedback guiding the experience.

## 🧠 Project Overview

This game was designed to test and improve reaction times in a fun, competitive format. After a countdown sequence, a random delay introduces unpredictability before the red LED signals players to react. The first player to press their button wins — confirmed by a white LED and a buzzer beep.

## 🛠️ Hardware Used

- Arduino Uno
- Breadboard
- Jumper wires
- 5 LEDs (Red, Green, Yellow, 2x White)
- 2 Push buttons
- 1 Piezo buzzer
- Resistors

## 🎮 Game Logic

1. **Countdown Phase**  
   - LEDs (Green → Yellow → Red) light up in sequence.
   - A random delay (e.g. 1–3 seconds) follows the red LED to simulate natural reaction conditions.

2. **Reaction Phase**  
   - Players wait for the red LED to turn off.
   - The first player to press their button:
     - Triggers their white LED to stay lit.
     - Activates a buzzer beep to indicate victory.

3. **Reset**  
   - Game resets after a short delay or manual restart.

## 📸 Circuit Layout

See the included image for breadboard wiring and component placement.  
*(Image shows LED arrangement, button inputs, buzzer placement, and Arduino connections.)*

## 📁 Files Included

- `main.cpp` — Main Arduino sketch
- `README.md` — Project documentation
- `RSPG Media/` — Circuit image and media assets
---

Made with curiosity and creativity by **ThomasPlatform-GHub**  
*“Every project is a step toward mastery.”*
