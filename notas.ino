int speakerPin = 8;
 
void setup() {
   pinMode(speakerPin, OUTPUT);
}
 
void loop() {
   digitalWrite(speakerPin, HIGH);
   delayMicroseconds(1000);
   digitalWrite(speakerPin, LOW);
   delayMicroseconds(1000);
}
