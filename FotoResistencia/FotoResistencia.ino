int resPin = A0;
int ledPin = 52;
int butPin = 53;
int lightValue = 0;
int butVal;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(resPin, INPUT);
  pinMode(butPin, INPUT);

}

void loop() {
  lightValue = analogRead(resPin);
  butVal = digitalRead(butPin);

  if (lightValue < 400) {
    if (butVal == LOW) {
      digitalWrite(ledPin, HIGH);
    }
    else {
      digitalWrite(ledPin, LOW);
    }
  }
  else {
    if (butVal == LOW) {
      digitalWrite(ledPin, LOW);
    }
    else{
      digitalWrite(ledPin, HIGH);
    }
    
  }

 // Serial.println(lightValue);
  Serial.println(butVal);
  delay(100);
}
