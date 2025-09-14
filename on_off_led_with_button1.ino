int buttonPin = 2;
int ledOnBoard = 13; // Built-in LED
int ledBreadboard = 8; // External LED on breadboard

bool ledState = false;

void setup() {
  pinMode(buttonPin, INPUT); 
  pinMode(ledOnBoard, OUTPUT);
  pinMode(ledBreadboard, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) { // For INPUT
    ledState = !ledState;

    // Set both LEDs to the same state
    digitalWrite(ledOnBoard, ledState);
    digitalWrite(ledBreadboard, ledState);

    // Wait for button release
    while (digitalRead(buttonPin) == HIGH) {
      delay(10);
    }
  }
}


