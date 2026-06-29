const int buttonPin = 2;
const int led1 = 12;
const int led2 = 13;

int pressCount = 0;
bool lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  Serial.begin(9600);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  // Detect button press
  if (lastButtonState == HIGH && buttonState == LOW) {

    pressCount++;

    switch (pressCount) {

      case 1:
        digitalWrite(led1, HIGH);
        break;

      case 2:
        digitalWrite(led2, HIGH);
        break;

      case 3:
        digitalWrite(led2, LOW);
        break;

      case 4:
        digitalWrite(led1, LOW);
        pressCount = 0;   // restart cycle
        break;
    }

    Serial.print("Press Count = ");
    Serial.println(pressCount);

    delay(50); // debounce
  }

  lastButtonState = buttonState;
}