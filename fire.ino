int val = 0;

void setup() {
    Serial.begin(9600);
    pinMode(5, INPUT);   // Flame sensor output pin connected
    pinMode(6, OUTPUT);  // Relay
    pinMode(7, OUTPUT);  // LED

    digitalWrite(6, HIGH); // Turn on Relay initially
}

void loop() {
    val = digitalRead(5);  // Read flame sensor output pin
    Serial.println(val);   // Print value to serial monitor
    delay(100);
   
    if (val == 0) {
        digitalWrite(6, LOW);  // Turn off Relay
        digitalWrite(7, HIGH); // Turn on LED
        // Turn on Motor here (if connected to the relay)
    } else {
        digitalWrite(6, HIGH); // Turn on Relay
        digitalWrite(7, LOW);  // Turn off LED
        // Turn off Motor here (if connected to the relay)
    }
}