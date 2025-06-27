int ldrPin = A0;       // LDR connected to A0
int ledPin = 13;       // Built-in LED or external LED on pin 13
int ldrValue = 0;      

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int ldrValue = analogRead(A0);
  Serial.println(ldrValue);  // See real-time reading
  delay(1000);


  // Light threshold: Adjust this based on your environment
  if (ldrValue < 10) {  // Dark environment
    digitalWrite(ledPin, HIGH);  // Turn ON LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn OFF LED
  }

  delay(1000);  // 1 second delay
}
