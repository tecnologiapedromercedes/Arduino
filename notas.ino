int speakerPin = 8;
 
void setup() {
   pinMode(speakerPin, OUTPUT);
}
 
void loop() {
 // Do
   digitalWrite(speakerPin, HIGH);
   delayMicroseconds(1915);
   digitalWrite(speakerPin, LOW);
   delayMicroseconds(1915);
}
