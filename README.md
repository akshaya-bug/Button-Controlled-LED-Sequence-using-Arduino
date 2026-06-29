# Button-Controlled-LED-Sequence-using-Arduino

## 🛠 Components Used

- Arduino UNO
- Push Button
- 2 × LEDs
- 2 × 220Ω Resistors
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Diagram

> Upload your circuit image inside the repository and replace the file name below.

![Circuit Diagram](images/circuit.png)

---

## 💻 Source Code

```cpp
// Paste your Arduino code here
```

Or simply mention:

The complete Arduino sketch is available in `Button_LED_Sequence.ino`.

---

## ⚙️ Working

Initially, both LEDs are OFF.

Each press of the push button performs the following action:

| Button Press | LED 1 | LED 2 |
|--------------|-------|-------|
| Initial State | OFF | OFF |
| 1st Press | ON | OFF |
| 2nd Press | ON | ON |
| 3rd Press | ON | OFF |
| 4th Press | OFF | OFF |
| Repeat | Cycle Starts Again | |

The button is configured using `INPUT_PULLUP`, and edge detection is used so that only one count is registered for each press.

---

## 📝 Code Explanation

### Pin Configuration

```cpp
const int buttonPin = 2;
const int led1 = 12;
const int led2 = 13;
```

These pins define the push button and LEDs connected to the Arduino.

### Variables

```cpp
int pressCount = 0;
bool lastButtonState = HIGH;
```

- `pressCount` stores the number of button presses.
- `lastButtonState` helps detect a new button press.

### Setup

The `setup()` function initializes the button as an input with an internal pull-up resistor, sets both LEDs as outputs, and starts Serial communication.

### Button Detection

```cpp
if (lastButtonState == HIGH && buttonState == LOW)
```

This detects a new button press by checking for a HIGH-to-LOW transition.

### LED Sequence

The `switch` statement controls the LEDs based on the current button press count.

- Press 1 → LED 1 ON
- Press 2 → LED 2 ON
- Press 3 → LED 2 OFF
- Press 4 → LED 1 OFF and restart sequence

### Debouncing

```cpp
delay(50);
```

A short delay prevents multiple counts from a single button press.

---

## 📷 Output Images

### FINAL IMAGE

<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/aec48b85-15d4-4ecd-9cc7-9a41b6d82a65" />

### LEDs ON

<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/f906794b-f8f4-4393-acf0-5b80147388ed" />


### LEDs OFF
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/1edeb591-7c04-4174-9b8e-72481bc13002" />

### FINAL STATE
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/fbec41f7-3485-4af8-bdae-1734dde0521e" />

---

## 🎯 Learning Outcome

Through this project, I learned:

- Reading push button input
- Using `INPUT_PULLUP`
- Controlling multiple LEDs
- Using switch-case statements
- Counting button presses
- Edge detection
- Debouncing push buttons
- Serial Monitor debugging

---

## 🚀 Future Improvements

- Add an OLED display
- Include buzzer feedback
- Control more LEDs
- Replace LEDs with relays
- Save the current state using EEPROM

---

## 👩‍💻 Author

**Akshaya**

Arduino Mini Project
