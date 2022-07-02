void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 9; i <= 13; i++){
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
  }

  //for (int i = 13; i >= 9; i--)
  
}
