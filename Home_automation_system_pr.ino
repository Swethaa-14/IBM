void setup() {
  pinMode (11,INPUT);
  pinMode (12,OUTPUT);
  pinMode (13,OUTPUT); 
  Serial.begin(9600);

}

void loop() {
 digitalWrite (12,LOW);
 delayMicroseconds(2);
 digitalWrite(12,HIGH);
 delayMicroseconds(10);
 digitalWrite(12,LOW);
 long duration=pulseIn(11, HIGH);
 int distance=duration*(0.34/2);
 if (distance<=45){
  digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
    }
    Serial.println (distance);
    delay(20);
}
