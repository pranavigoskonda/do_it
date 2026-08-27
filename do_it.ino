// ESP32 Built-in LED Blink Program

const int LED_PIN = 2;

void setup() {
    // Configure GPIO 2 as an output
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Turn the blue LED ON
    digitalWrite(LED_PIN, HIGH);

    // Wait for 4 seconds
    delay(7500);

    // Turn the blue LED OFF
    digitalWrite(LED_PIN, LOW);

    // Wait for 4 seconds
    delay(7500);
}