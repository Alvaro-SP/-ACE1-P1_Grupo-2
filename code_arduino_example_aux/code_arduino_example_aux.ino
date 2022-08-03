int pinin=22;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(96000);
  pinMode(pinin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(pinin)== HIGH){
    Serial.println('H');
  }
  else{
    Serial.println('L');
  }
                     // wait for a second
}
