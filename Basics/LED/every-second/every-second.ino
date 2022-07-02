int dt = 500;
int j = 13;
void setup() {
  // put your setup code here, to run once:
  for (int i=9; i <= 13; i++)
    pinMode(i, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j; j >= 9; j = j-2){
    digitalWrite(j, HIGH);
    delay(dt);
    digitalWrite(j, LOW);
  }
  if (j==7){
    j = 12;
   
  }
  else{
    j = 13;
  }
}
