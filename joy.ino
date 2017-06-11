const byte PIN_ANALOG_X = 0;
const byte PIN_ANALOG_Y = 1;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int x = analogRead(PIN_ANALOG_X);
  int y = analogRead(PIN_ANALOG_Y);
  
  if(x < 30){
    Serial.write("L");
    delay(50);
  }
  if(x > 990){
    Serial.write("R");
    delay(50);
  }
  if(y < 30){
    Serial.write("D");
    delay(50);
  }
  if(y > 990){
    Serial.write("U");
    delay(50);
  }
}
